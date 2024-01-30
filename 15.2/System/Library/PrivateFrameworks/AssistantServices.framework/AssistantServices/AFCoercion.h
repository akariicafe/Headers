@interface AFCoercion : NSObject {
    id /* block */ _block;
}

+ (id)coercionWithBlock:(id /* block */)a0;
+ (id)typeAssertionWithClass:(Class)a0;
+ (id)stringToUUIDCoercion;
+ (id)identityCoercion;

- (id)initWithBlock:(id /* block */)a0;
- (id)coerceObject:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;

@end
