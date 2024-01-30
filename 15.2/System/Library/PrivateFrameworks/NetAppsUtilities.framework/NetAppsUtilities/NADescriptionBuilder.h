@class NSString, NSMutableString;
@protocol NSObject;

@interface NADescriptionBuilder : NSObject {
    id<NSObject> _object;
    NSMutableString *_proem;
    NSMutableString *_description;
}

@property (class, readonly) NSString *componentSeparator;
@property (class, readonly) NSString *nameObjectSeparator;

@property (nonatomic) int activeComponent;
@property (retain, nonatomic) NSString *activeMultilinePrefix;
@property (nonatomic) BOOL useDebugDescription;

+ (id)builderWithObject:(id)a0;
+ (id)succinctDescriptionForObject:(id)a0;
+ (id)descriptionForObject:(id)a0;
+ (id)descriptionForObject:(id)a0 withObjectsAndNames:(id)a1;

- (id)appendUInt64:(unsigned long long)a0 withName:(id)a1;
- (id)appendSuper;
- (id)appendKey:(id)a0;
- (id)modifyBody:(id /* block */)a0;
- (void)appendBodySectionWithName:(id)a0 multilinePrefix:(id)a1 block:(id /* block */)a2;
- (void)appendDictionarySection:(id)a0 withName:(id)a1 skipIfEmpty:(BOOL)a2;
- (id)appendCString:(const char *)a0 withName:(id)a1;
- (id)appendTimeInterval:(double)a0 withName:(id)a1 decomposeUnits:(BOOL)a2;
- (void)appendArraySection:(id)a0 withName:(id)a1 skipIfEmpty:(BOOL)a2 objectTransformer:(id /* block */)a3;
- (void)appendString:(id)a0 withName:(id)a1;
- (id)appendInt64:(long long)a0 withName:(id)a1;
- (id)appendInteger:(long long)a0 withName:(id)a1;
- (void)appendDictionarySection:(id)a0 withName:(id)a1 multilinePrefix:(id)a2 skipIfEmpty:(BOOL)a3;
- (void)appendArraySection:(id)a0 withName:(id)a1 multilinePrefix:(id)a2 skipIfEmpty:(BOOL)a3 objectTransformer:(id /* block */)a4;
- (id)initWithObject:(id)a0;
- (id)appendUnsignedInt:(unsigned int)a0 withName:(id)a1;
- (void)tryAppendKey:(id)a0;
- (id)appendSelector:(SEL)a0 withName:(id)a1;
- (id)build;
- (id)appendDouble:(double)a0 withName:(id)a1 decimalPrecision:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)appendObject:(id)a0 withName:(id)a1;
- (id)appendInt:(int)a0 withName:(id)a1;
- (void)appendArraySection:(id)a0 withName:(id)a1 skipIfEmpty:(BOOL)a2;
- (void)appendString:(id)a0 withName:(id)a1 skipIfEmpty:(BOOL)a2;
- (id)appendBool:(BOOL)a0 withName:(id)a1 ifEqualTo:(BOOL)a2;
- (id)modifyProem:(id /* block */)a0;
- (id)appendKeys:(id)a0;
- (id)_activeComponentString;
- (id)appendString:(id)a0;
- (id)appendQueue:(id)a0 withName:(id)a1;
- (void)appendArraySection:(id)a0 withName:(id)a1 multilinePrefix:(id)a2 skipIfEmpty:(BOOL)a3;
- (id)appendPointer:(void *)a0 withName:(id)a1;
- (id)appendObjectsAndNames:(id)a0 args:(char *)a1;
- (id)appendObjectsAndNames:(id)a0;
- (id)appendObject:(id)a0 withName:(id)a1 skipIfNil:(BOOL)a2;
- (id)appendClass:(Class)a0 withName:(id)a1;
- (id)appendFormat:(id)a0;
- (id)appendUnsignedInteger:(unsigned long long)a0 withName:(id)a1;
- (void)appendDictionarySection:(id)a0 withName:(id)a1 multilinePrefix:(id)a2 skipIfEmpty:(BOOL)a3 objectTransformer:(id /* block */)a4;
- (id)appendBool:(BOOL)a0 withName:(id)a1;

@end
