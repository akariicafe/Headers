@class NSArray;

@interface PHMediaFormatAssetBundleConversionRequest : PHMediaFormatConversionCompositeRequest

@property (retain) NSArray *subrequests;

- (id)outputPathExtension;
- (void).cxx_destruct;
- (id)outputFileType;
- (BOOL)prepareWithError:(id *)a0;
- (BOOL)requiresFormatConversion;
- (BOOL)requiresMetadataChanges;
- (void)enqueueSubrequestsOnConversionManager:(id)a0;
- (void)enumerateSubrequests:(id /* block */)a0;
- (void)postProcessSuccessfulCompositeRequest;

@end
