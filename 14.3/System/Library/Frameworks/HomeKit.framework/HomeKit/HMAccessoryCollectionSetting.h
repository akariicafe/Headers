@class NSSet;

@interface HMAccessoryCollectionSetting : HMAccessorySetting <NSFastEnumeration>

@property (readonly, copy) NSSet *itemValueClasses;

+ (id)itemValueClassesForKeyPath:(id)a0;
+ (void)setItemValueClass:(Class)a0 forKeyPath:(id)a1;
+ (void)setItemValueClasses:(id)a0 forKeyPath:(id)a1;

- (Class)valueClass;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)setItemValueClass:(Class)a0;
- (id)value;
- (void)setItemValueClasses:(id)a0;
- (void)_setting:(id)a0 didAddConstraint:(id)a1;
- (void)_setting:(id)a0 didRemoveConstraint:(id)a1;
- (id)initWithKey:(id)a0 properties:(unsigned long long)a1 value:(id)a2;
- (void)addItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)replaceItems:(id)a0 withItems:(id)a1 completionHandler:(id /* block */)a2;
- (void)replaceItem:(id)a0 withItem:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateValue:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithInternal:(id)a0;

@end
