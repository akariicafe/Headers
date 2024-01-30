@class NSArray;

@interface PHMediaFormatAssetBundleConversionRequest : PHMediaFormatConversionCompositeRequest

@property (retain) NSArray *subrequests;

- (id)outputFileType;
- (BOOL)prepareWithError:(id *)a0;
- (void).cxx_destruct;
- (id)outputPathExtension;
- (void)enqueueSubrequestsOnConversionManager:(id)a0;
- (void)enumerateSubrequests:(id /* block */)a0;
- (void)postProcessSuccessfulCompositeRequest;
- (BOOL)requiresFormatConversion;
- (BOOL)requiresMetadataChanges;

@end
