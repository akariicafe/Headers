@interface TDEffectStyleProduction : TDElementProduction

- (id)displayName;
- (void)generateRenditionsWithDocument:(id)a0;
- (id)associatedFileModificationDateWithDocument:(id)a0;
- (void)deleteRenditionsInDocument:(id)a0 shouldDeleteAssetFiles:(BOOL)a1;

@end
