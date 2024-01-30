@interface CNObjCClass : NSObject {
    Class _cls;
}

+ (id)classWithClass:(Class)a0;
+ (BOOL)addMethod:(id)a0 toClass:(Class)a1;
+ (id)allMethodsOfClass:(Class)a0;
+ (void)enumerateMethodsOfClass:(Class)a0 withBlock:(id /* block */)a1;
+ (id)instanceMethodOfClass:(Class)a0 forSelector:(SEL)a1;

- (id)initWithClass:(Class)a0;
- (id)instanceMethodForSelector:(SEL)a0;
- (BOOL)addMethod:(id)a0;
- (id)allMethods;
- (void)enumerateMethodsWithBlock:(id /* block */)a0;

@end
