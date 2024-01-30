@class NSString, NSArray, NSNumber;

@interface SAConfidenceScores : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *assetVersion;
@property (copy, nonatomic) NSString *classifiedUser;
@property (nonatomic) long long lowScoreThreshold;
@property (nonatomic) long long processedAudioDurationMilliseconds;
@property (copy, nonatomic) NSArray *scores;
@property (copy, nonatomic) NSNumber *scoringSchemeVersion;
@property (copy, nonatomic) NSString *thresholdType;
@property (copy, nonatomic) NSString *userIdentityClassification;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)confidenceScores;
+ (id)confidenceScoresWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
