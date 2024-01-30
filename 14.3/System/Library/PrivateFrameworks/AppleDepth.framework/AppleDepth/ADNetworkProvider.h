@class NSURL, NSArray, NSDictionary;

@interface ADNetworkProvider : NSObject {
    NSDictionary *_ioBufferMap;
    NSDictionary *_portraitSizeForInput;
    NSDictionary *_landscapeSizeForInput;
    NSDictionary *_portraitSizeForOutput;
    NSDictionary *_landscapeSizeForOutput;
}

@property BOOL isOutputInversed;
@property (retain) NSURL *url;
@property (retain) NSArray *layoutNames;
@property unsigned long long rawConfidenceUnits;
@property float lowConfidenceThresholdSuggestion;
@property float highConfidenceThresholdSuggestion;

+ (id)providerForNetwork:(id)a0 prioritization:(long long)a1;
+ (id)getEspressoFileNameForNetwork:(id)a0 andPriority:(long long)a1;
+ (id)getConfigFolderForNetwork:(id)a0;
+ (id)getDefaultPathForNetwork:(id)a0 andPriority:(long long)a1;
+ (id)getAlternativePathForNetwork:(id)a0 andPriority:(long long)a1;
+ (BOOL)getAndVerifyDimensionsFromConfig:(id)a0 inDictionary:(id)a1 forKey:(id)a2 dimensions:(id)a3 layout:(unsigned long long *)a4;

- (void).cxx_destruct;
- (id)bufferNameForType:(id)a0;
- (struct CGSize { double x0; double x1; })portraitSizeForInput:(id)a0;
- (struct CGSize { double x0; double x1; })portraitSizeForOutput:(id)a0;
- (struct CGSize { double x0; double x1; })portraitSizeForOutputOfType:(id)a0;
- (struct CGSize { double x0; double x1; })landscapeSizeForInput:(id)a0;
- (id)initWithNetwork:(id)a0 prioritization:(long long)a1;
- (struct CGSize { double x0; double x1; })landscapeSizeForOutput:(id)a0;
- (struct CGSize { double x0; double x1; })portraitSizeForInputOfType:(id)a0;
- (struct CGSize { double x0; double x1; })landscapeSizeForInputOfType:(id)a0;
- (struct CGSize { double x0; double x1; })landscapeSizeForOutputOfType:(id)a0;

@end
