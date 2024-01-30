@class TDMicaAsset;

@interface TDMicaElementProduction : TDElementProduction <TDElementAttributes>

@property (retain, nonatomic) TDMicaAsset *asset;

- (id)relativePath;
- (void)dealloc;
- (id)associatedFileURLWithDocument:(id)a0;
- (id)baseKeySpec;
- (void)copyAttributesInto:(id)a0;
- (id)copyDataFromAttributes;
- (id)dataFromAttributes;
- (void)deleteRenditionsInDocument:(id)a0 shouldDeleteAssetFiles:(BOOL)a1;
- (BOOL)generateRenditionsWithEntityName:(id)a0 document:(id)a1 errorDescription:(id *)a2;
- (void)setAttributesFromCopyData:(id)a0;
- (void)setAttributesFromData:(id)a0;

@end
