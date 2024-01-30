@class NSObject;
@protocol CRTextFeaturesFiltering, MTLDevice, CRTextFeatureOrdering;

@interface CRRecognizerConfiguration : NSObject

@property (retain) id<CRTextFeatureOrdering> cachedTextFeatureOrder;
@property (retain) id<CRTextFeaturesFiltering> cachedTextFeatureFilter;
@property BOOL optimizeGroupsForStability;
@property (readonly) unsigned long long revision;
@property (readonly) BOOL cpuOnly;
@property (readonly) long long numTopStringCandidates;
@property (readonly) double angleThresholdForRotatedCrops;
@property (readonly) id<CRTextFeatureOrdering> textFeatureOrder;
@property (readonly) id<CRTextFeaturesFiltering> textFeatureFilter;
@property (readonly) BOOL falsePositiveFilteringDisabled;
@property (readonly) BOOL scriptDetectionDisabled;
@property (readonly) NSObject<MTLDevice> *metalDevice;
@property (readonly) BOOL skipRecognition;

+ (id)languageSetFromInputLanguages:(id)a0 supportedLanguages:(id)a1;
+ (id)supportedLanguagesForVersion:(long long)a0;

- (void).cxx_destruct;
- (id)initV2DefaultConfigWithOptions:(id)a0;
- (id)initV1DefaultConfigWithOptions:(id)a0;
- (id)initV3DefaultConfigWithOptions:(id)a0;
- (id)initWithImageReaderOptions:(id)a0 error:(id *)a1;

@end
