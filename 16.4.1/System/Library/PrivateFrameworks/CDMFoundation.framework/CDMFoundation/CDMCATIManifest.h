@class NSDictionary, NSString;

@interface CDMCATIManifest : NSObject

@property (retain) NSDictionary *manifest;
@property BOOL manifestValid;
@property (retain) NSString *locale;
@property (retain) NSString *date;
@property (retain) NSString *GUID;
@property (retain) NSString *version;
@property float confidenceScoreThreshold;
@property float multiturnConfidenceScoreThreshold;
@property (retain) NSString *usoEntity;
@property int usoElementId;
@property (retain) NSString *usoVerb;
@property (retain) NSString *usoEdge;
@property int expectedPositiveUtterances;
@property (retain) NSDictionary *weights;
@property (retain) NSDictionary *positiveOverrides;
@property (retain) NSDictionary *intentLookup;
@property BOOL isPreGuidVersion;
@property unsigned long long suppressionState;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (void)extractWeightsAndOverridesFromManifest:(id)a0;
- (int)getExpectedPositiveUtterancesValue:(id)a0;
- (float)getMultiturnThresholdValue:(id)a0;
- (id)getPositiveOverrideGuidsForModelType:(unsigned long long)a0;
- (unsigned long long)getSuppressionState:(id)a0;
- (float)getThresholdValue:(id)a0;
- (int)getUsoElementId:(id)a0;
- (id)getWeightGuidsForModelType:(unsigned long long)a0;
- (void)getWeightsAndOverridesAtIntentKeyFromManifest:(id)a0;
- (void)getWeightsAndOverridesWithLegacyKeysFromManifest:(id)a0;
- (void)readCatiManifest:(id)a0;
- (BOOL)validateManifest;

@end
