@class NSString, NSMutableString, NSObject;

@interface CNDescriptionBuilder : NSObject {
    NSObject *_object;
    NSMutableString *_description;
}

@property (copy, nonatomic) NSString *separator;

+ (id)descriptionForObject:(id)a0 withNamesAndObjects:(id)a1;
+ (id)descriptionBuilderWithObject:(id)a0;
+ (id)descriptionForBool:(BOOL)a0;

- (id)appendName:(id)a0 timeInterval:(double)a1;
- (id)build;
- (id)init;
- (id)appendName:(id)a0 unsignedInteger:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)appendName:(id)a0 selector:(SEL)a1;
- (id)initWithObject:(id)a0;
- (id)appendName:(id)a0 doubleValue:(double)a1;
- (id)appendNamesAndObjects:(id)a0 args:(char *)a1;
- (id)appendableDescriptionOfValue:(id)a0;
- (id)appendName:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)appendName:(id)a0 object:(id)a1;
- (id)appendObject:(id)a0 withName:(id)a1;
- (void)tryAppendKey:(id)a0;
- (id)appendNamesAndObjects:(id)a0;
- (id)appendName:(id)a0 intValue:(int)a1;
- (id)appendName:(id)a0 pointerValue:(void *)a1;
- (id)appendKeys:(id)a0;
- (id)appendKey:(id)a0;
- (id)appendName:(id)a0 boolValue:(BOOL)a1;
- (id)appendName:(id)a0 integerValue:(long long)a1;

@end
