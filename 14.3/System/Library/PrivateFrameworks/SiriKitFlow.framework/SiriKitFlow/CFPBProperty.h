@class NSString, NSInvocation, NSArray;

@interface CFPBProperty : NSObject {
    NSInvocation *_setter;
    NSInvocation *_getter;
    NSInvocation *_has;
    NSInvocation *_count;
    NSInvocation *_convertToString;
    NSInvocation *_convertFromString;
    void /* function */ *_toDictionaryReprFn;
    void /* function */ *_fromDictionaryReprFn;
    NSString *_structName;
    NSArray *_structFields;
    unsigned long long _structSize;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic) char type;
@property (nonatomic) char subType;
@property (retain, nonatomic) Class objectType;
@property (retain, nonatomic) Class subObjectType;
@property (readonly, nonatomic) BOOL isObject;
@property (readonly, nonatomic) BOOL isStruct;
@property (readonly, nonatomic) BOOL canConvertFromString;

+ (id)pbPropertyFor:(struct objc_property { } *)a0 type:(Class)a1;
+ (id)getValidPropertiesForType:(Class)a0 withCache:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)initWith:(struct objc_property { } *)a0 type:(Class)a1;
- (id)_parseStructDefinition:(id)a0;
- (unsigned long long)getCountOfRepeatedValuesFromInstance:(id)a0;
- (BOOL)instanceHasValue:(id)a0;
- (id)getObjValueFromInstance:(id)a0;
- (void)setObjValue:(id)a0 onInstance:(id)a1;
- (id)getStructValueFromInstance:(id)a0;
- (BOOL)setStructValue:(id)a0 onInstance:(id)a1;
- (id)getNumberValueFromInstance:(id)a0;
- (void)setNumberValue:(id)a0 onInstance:(id)a1;
- (id)getPtrArrayValueFromInstance:(id)a0;

@end
