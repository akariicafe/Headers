@interface CNObjCClass : NSObject {
    Class _cls;
}

+ (void)enumerateMethodsOfClass:(Class)a0 withBlock:(id /* block */)a1;
+ (id)allMethodsOfClass:(Class)a0;
+ (id)classWithClass:(Class)a0;
+ (id)instanceMethodOfClass:(Class)a0 forSelector:(SEL)a1;
+ (BOOL)addMethod:(id)a0 toClass:(Class)a1;

- (id)instanceMethodForSelector:(SEL)a0;
- (id)initWithClass:(Class)a0;
- (void)enumerateMethodsWithBlock:(id /* block */)a0;
- (id)allMethods;
- (BOOL)addMethod:(id)a0;

@end
