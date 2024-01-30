@class NSString, NSInvocation, NSArray;

@interface _PBProperty : NSObject {
    NSString *_name;
    Class _objectType;
    Class _subObjectType;
    char _type;
    char _subType;
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

- (id)description;
- (void)dealloc;

@end
