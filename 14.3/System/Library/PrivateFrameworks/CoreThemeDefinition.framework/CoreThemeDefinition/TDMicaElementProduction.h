@class TDMicaAsset;

@interface TDMicaElementProduction : TDElementProduction <TDElementAttributes>

@property (retain, nonatomic) TDMicaAsset *asset;

- (void)dealloc;
- (id)relativePath;
- (void)copyAttributesInto:(id)a0;
- (id)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(id)a0;
- (id)baseKeySpec;
- (id)dataFromAttributes;
- (void)setAttributesFromData:(id)a0;
- (id)associatedFileURLWithDocument:(id)a0;
- (BOOL)generateRenditionsWithEntityName:(id)a0 document:(id)a1 errorDescription:(id *)a2;
- (void)deleteRenditionsInDocument:(id)a0 shouldDeleteAssetFiles:(BOOL)a1;

@end
