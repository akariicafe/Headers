@class NSSet;

@interface HMCollectionSetting : HMSetting <NSFastEnumeration>

@property (readonly, copy) NSSet *itemValueClasses;

+ (id)defaultItemValueClasses;
+ (id)itemValueClassesForKeyPath:(id)a0;
+ (void)setItemValueClass:(Class)a0 forKeyPath:(id)a1;
+ (void)setItemValueClasses:(id)a0 forKeyPath:(id)a1;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (void)setItemValueClass:(Class)a0;
- (void)setItemValueClasses:(id)a0;

@end
