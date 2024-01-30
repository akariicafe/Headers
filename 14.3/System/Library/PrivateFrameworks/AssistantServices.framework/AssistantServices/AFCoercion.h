@interface AFCoercion : NSObject {
    id /* block */ _block;
}

+ (id)identityCoercion;
+ (id)typeAssertionWithClass:(Class)a0;
+ (id)stringToUUIDCoercion;
+ (id)coercionWithBlock:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (id)coerceObject:(id)a0 error:(id *)a1;

@end
