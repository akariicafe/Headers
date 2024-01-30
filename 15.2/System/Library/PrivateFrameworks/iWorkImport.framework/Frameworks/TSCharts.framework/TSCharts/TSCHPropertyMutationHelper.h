@interface TSCHPropertyMutationHelper : NSObject

+ (id)convertToStyleSwapTuplesForStyleOwner:(id)a0 styleSwapType:(int)a1 nonStyleSwapType:(int)a2 index:(unsigned long long)a3 fromMutations:(id)a4 forImport:(BOOL)a5 withOptionalStyleValueConversionBlock:(id /* block */)a6;
+ (id)styleSwapTuplesFromMutationTuples:(id)a0 forImport:(BOOL)a1;
+ (int)specificMutationPropertyForGeneric:(int)a0 styleOwner:(id)a1 allowSpecificProperties:(BOOL)a2;
+ (void)applyMutations:(id)a0 forImport:(BOOL)a1 forStyleOwner:(id)a2 withNonStylePropertyList:(id)a3 toStylePropertyMap:(id)a4 andNonStylePropertyMap:(id)a5;
+ (int)safe_specificMutationPropertyForGeneric:(int)a0 styleOwner:(id)a1 allowSpecificProperties:(BOOL)a2;
+ (void)setValue:(id)a0 forProperty:(int)a1 ofStyleOwner:(id)a2;

- (id)init;

@end
