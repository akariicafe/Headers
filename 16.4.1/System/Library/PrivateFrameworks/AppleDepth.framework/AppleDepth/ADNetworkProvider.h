@class NSURL, NSDictionary, NSMutableDictionary;

@interface ADNetworkProvider : NSObject {
    NSMutableDictionary *_sizesForInput;
    NSMutableDictionary *_sizesForOutput;
    NSMutableDictionary *_inputBufferMap;
    NSMutableDictionary *_outputBufferMap;
    NSDictionary *_networkMetadata;
}

@property (readonly, nonatomic) NSURL *url;
@property unsigned long long rawConfidenceUnits;
@property float lowConfidenceThresholdSuggestion;
@property float highConfidenceThresholdSuggestion;
@property (readonly, nonatomic) NSDictionary *layoutNamesDict;

+ (id)getAlternativePathForNetwork:(id)a0 andPriority:(long long)a1;
+ (BOOL)getAndVerifySizesFromConfig:(id)a0 inDictionary:(id)a1 forKey:(id)a2 sizes:(id)a3 layout:(unsigned long long *)a4;
+ (id)getConfigFolderForNetwork:(id)a0;
+ (id)getDefaultPathForNetwork:(id)a0 andPriority:(long long)a1 allowPrecompiledModel:(BOOL)a2;
+ (id)getEspressoFileNameForNetwork:(id)a0 andPriority:(long long)a1;
+ (id)providerForNetwork:(id)a0;
+ (id)providerForNetwork:(id)a0 espressoEngine:(unsigned long long)a1;
+ (id)providerForNetwork:(id)a0 prioritization:(long long)a1;
+ (id)providerForNetwork:(id)a0 prioritization:(long long)a1 requestedLayouts:(id)a2;
+ (id)providerForNetwork:(id)a0 prioritization:(long long)a1 requestedLayouts:(id)a2 espressoEngine:(unsigned long long)a3;
+ (void)updateSizeForItem:(id)a0 fromShape:(id)a1 dtype:(id)a2 forLayout:(unsigned long long)a3 target:(id)a4;

- (void).cxx_destruct;
- (id)configurationNameForLayout:(unsigned long long)a0;
- (id)metadataForKey:(id)a0;
- (id)bufferNameForInputType:(id)a0;
- (id)bufferNameForOutputType:(id)a0;
- (id)bufferNameForType:(id)a0 isInput:(BOOL)a1;
- (id)descriptorForBuffer:(id)a0 isInput:(BOOL)a1 pixelFormat:(unsigned int)a2;
- (id)descriptorForBufferOfType:(id)a0 isInput:(BOOL)a1 pixelFormat:(unsigned int)a2;
- (id)initWithNetwork:(id)a0 prioritization:(long long)a1 requestedLayouts:(id)a2 allowPrecompiledModel:(BOOL)a3;
- (BOOL)processConfig:(id)a0 inDictionary:(id)a1 forLayout:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })sizeFor:(id)a0 isInput:(BOOL)a1 requestedLayout:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })sizeForInput:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForInput:(id)a0 withLayout:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })sizeForOutput:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForOutput:(id)a0 withLayout:(unsigned long long)a1;
- (id)supportedSizesForInput:(id)a0;
- (id)supportedSizesForOutput:(id)a0;

@end
