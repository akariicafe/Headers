@interface NUJSObject : NUJSProxy

+ (struct OpaqueJSClass { } *)jsClass;

- (id)toString;
- (id)toObject;
- (BOOL)hasProperty:(id)a0;
- (void)enumerateProperties:(id /* block */)a0;
- (id)valueForProperty:(id)a0 context:(id)a1 error:(out id *)a2;
- (id)JSValueWithContext:(id)a0;

@end
