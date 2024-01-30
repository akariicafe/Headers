@class JSManagedValue;

@interface IKJSWeakMap : IKJSObject

@property (readonly, nonatomic) JSManagedValue *managedWeakMap;

- (void).cxx_destruct;
- (id)initWithAppContext:(id)a0;
- (id)_jsWeakMap;
- (void)setValue:(id)a0 forWeakKey:(id)a1;
- (id)valueForWeakKey:(id)a0;
- (const struct OpaqueJSValue { } *)valueRefForWeakKeyRef:(struct OpaqueJSValue { } *)a0;

@end
