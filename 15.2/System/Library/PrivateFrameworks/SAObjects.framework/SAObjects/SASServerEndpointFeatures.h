@class NSArray, NSString;

@interface SASServerEndpointFeatures : SABaseClientBoundCommand

@property (nonatomic) double eosLikelihood;
@property (nonatomic) long long numOfWords;
@property (copy, nonatomic) NSArray *pauseCounts;
@property (nonatomic) long long processedAudioDurationMs;
@property (nonatomic) double silenceProbability;
@property (copy, nonatomic) NSString *taskName;
@property (nonatomic) long long trailingSilenceDuration;

+ (id)serverEndpointFeatures;
+ (id)serverEndpointFeaturesWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
