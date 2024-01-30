@class NSURL, NSMutableDictionary, NSDictionary;

@interface ADNetworkProvider : NSObject {
    NSMutableDictionary *_sizesForInput;
    NSMutableDictionary *_sizesForOutput;
    NSDictionary *_ioBufferMap;
    NSDictionary *_networkMetadata;
}

@property BOOL isOutputInversed;
@property (readonly, nonatomic) NSURL *url;
@property unsigned long long rawConfidenceUnits;
@property float lowConfidenceThresholdSuggestion;
@property float highConfidenceThresholdSuggestion;
@property (readonly, nonatomic) NSMutableDictionary *layoutNamesDict;

+ (BOOL)getAndVerifySizesFromConfig:(id)a0 inDictionary:(id)a1 forKey:(id)a2 sizes:(id)a3 layout:(unsigned long long *)a4;
+ (void)updateSizeForItem:(id)a0 fromShape:(id)a1 forLayout:(unsigned long long)a2 target:(id)a3;
+ (id)getAlternativePathForNetwork:(id)a0 andPriority:(long long)a1;
+ (id)getDefaultPathForNetwork:(id)a0 andPriority:(long long)a1;
+ (id)getConfigFolderForNetwork:(id)a0;
+ (id)getEspressoFileNameForNetwork:(id)a0 andPriority:(long long)a1;
+ (id)providerForNetwork:(id)a0;
+ (id)providerForNetwork:(id)a0 prioritization:(long long)a1;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForInput:(id)a0;
- (id)configurationNameForLayout:(unsigned long long)a0;
- (id)metadataForKey:(id)a0;
- (id)supportedSizesForInput:(id)a0;
- (id)supportedSizesForOutput:(id)a0;
- (id)descriptorForBuffer:(id)a0 isInput:(BOOL)a1 pixelFormat:(unsigned int)a2;
- (id)descriptorForBufferOfType:(id)a0 isInput:(BOOL)a1 pixelFormat:(unsigned int)a2;
- (struct CGSize { double x0; double x1; })sizeFor:(id)a0 isInput:(BOOL)a1 requestedLayout:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })sizeForOutput:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForInput:(id)a0 withLayout:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })sizeForOutput:(id)a0 withLayout:(unsigned long long)a1;
- (id)initWithNetwork:(id)a0 prioritization:(long long)a1;
- (id)bufferNameForType:(id)a0;

@end
