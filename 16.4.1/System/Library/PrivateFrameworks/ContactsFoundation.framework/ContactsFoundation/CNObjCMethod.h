@class NSString;

@interface CNObjCMethod : NSObject

@property (readonly) SEL selector;
@property (readonly, copy) NSString *name;
@property (readonly) void /* function */ *implementation;
@property (readonly, copy) NSString *typeEncoding;

+ (id)methodWithName:(id)a0 implementation:(void /* function */ *)a1 typeEncoding:(id)a2;

- (void).cxx_destruct;
- (id)initWithMethod:(struct objc_method { } *)a0;
- (id)initWithName:(id)a0 implementation:(void /* function */ *)a1 typeEncoding:(id)a2;
- (id)methodBySettingName:(id)a0;
- (id)performOnObject:(id)a0;

@end
