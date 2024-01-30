@class NSDictionary, NSString, NSSet;

@interface CDMCATIManifest : NSObject

@property (retain) NSDictionary *manifest;
@property BOOL manifestValid;
@property (retain) NSString *locale;
@property (retain) NSString *date;
@property (retain) NSString *GUID;
@property (retain) NSString *version;
@property float confidenceScoreThreshold;
@property (retain) NSSet *weights;
@property (retain) NSSet *positiveOverrides;
@property (retain) NSSet *negativeOverrides;
@property (retain) NSString *usoEntity;
@property (retain) NSString *usoVerb;
@property (retain) NSString *usoCATIdEdge;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (void)readCatiManifest:(id)a0;
- (BOOL)validateManifest;
- (float)getThresholdValue:(id)a0;
- (void)extractWeightsAndOverridesFromManifest:(id)a0;
- (void)getWeightsAndOverridesAtIntentKeyFromManifest:(id)a0;
- (void)getWeightsAndOverridesWithLegacyKeysFromManifest:(id)a0;
- (BOOL)intentIsInvocationModel:(id)a0;

@end
