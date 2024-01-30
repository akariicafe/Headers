@interface TDEffectStyleProduction : TDElementProduction

- (id)displayName;
- (id)associatedFileModificationDateWithDocument:(id)a0;
- (void)deleteRenditionsInDocument:(id)a0 shouldDeleteAssetFiles:(BOOL)a1;
- (void)generateRenditionsWithDocument:(id)a0;

@end
