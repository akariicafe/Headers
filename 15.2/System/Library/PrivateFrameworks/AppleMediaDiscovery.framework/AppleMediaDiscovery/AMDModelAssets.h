@class NSDictionary, AMDModelAssetsMetadata, NSData;

@interface AMDModelAssets : NSObject

@property (retain, nonatomic) NSDictionary *dictionaries;
@property (retain, nonatomic) NSDictionary *bitmasks;
@property (retain, nonatomic) AMDModelAssetsMetadata *assetsMetadata;
@property (retain, nonatomic) NSData *contentToLogicalMap;
@property (retain, nonatomic) NSData *logicalToContentMap;
@property (nonatomic) BOOL useBinaryInputMap;
@property (nonatomic) BOOL useBinaryOutputMap;
@property (nonatomic) BOOL minimalMapPresent;

+ (id)loadMapFromDir:(id)a0 andFile:(id)a1 error:(id *)a2;
+ (void)saveMap:(id)a0 toDir:(id)a1 inFile:(id)a2 keyIsInt64:(BOOL)a3 error:(id *)a4;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)getLogicalToContentMap;
- (id)getDictionaryByName:(id)a0;
- (id)getBitmaskByName:(id)a0 usingFeatureProvider:(id)a1;
- (id)initFromDir:(id)a0 andMetadata:(id)a1 useBinaryInputMap:(BOOL)a2 useBinaryOutputMap:(BOOL)a3 withModelId:(id)a4 isInference:(BOOL)a5 error:(id *)a6;
- (void)loadLToCMapFromDir:(id)a0 error:(id *)a1;
- (void)loadCToLMapFromDir:(id)a0 error:(id *)a1;
- (id)initAssetsfromDir:(id)a0 error:(id *)a1;
- (void)saveCToLMap:(id)a0 toDir:(id)a1 error:(id *)a2;
- (void)saveLToCMap:(id)a0 toDir:(id)a1 error:(id *)a2;
- (id)getContentToLogicalMap;

@end
