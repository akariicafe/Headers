@class NSString, NSNumber, NSArray;

@interface INPrivateMediaItemValueData : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *recommendationId;
@property (readonly, copy, nonatomic) NSString *assetInfo;
@property (readonly, copy, nonatomic) NSString *sharedUserIdFromPlayableMusicAccount;
@property (readonly, copy, nonatomic) NSString *punchoutURI;
@property (readonly, copy, nonatomic) NSNumber *requiresSubscription;
@property (readonly, copy, nonatomic) NSString *provider;
@property (readonly, copy, nonatomic) NSNumber *isAvailable;
@property (readonly, copy, nonatomic) NSNumber *isHardBan;
@property (readonly, copy, nonatomic) NSString *bundleId;
@property (readonly, copy, nonatomic) NSString *universalResourceLink;
@property (readonly, copy, nonatomic) NSString *providerAppName;
@property (readonly, copy, nonatomic) NSArray *internalSignals;
@property (readonly, copy, nonatomic) NSNumber *ampConfidenceScore;
@property (readonly, nonatomic) long long ampConfidenceLevel;
@property (readonly, copy, nonatomic) NSArray *mediaSubItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithRecommendationId:(id)a0 assetInfo:(id)a1 sharedUserIdFromPlayableMusicAccount:(id)a2 punchoutURI:(id)a3 requiresSubscription:(id)a4 provider:(id)a5 isAvailable:(id)a6 isHardBan:(id)a7 bundleId:(id)a8 universalResourceLink:(id)a9 providerAppName:(id)a10 mediaSubItems:(id)a11;
- (id)_dictionaryRepresentation;
- (id)initWithRecommendationId:(id)a0 assetInfo:(id)a1 sharedUserIdFromPlayableMusicAccount:(id)a2 punchoutURI:(id)a3 requiresSubscription:(id)a4 provider:(id)a5 isAvailable:(id)a6 isHardBan:(id)a7 bundleId:(id)a8 universalResourceLink:(id)a9 providerAppName:(id)a10 internalSignals:(id)a11 mediaSubItems:(id)a12;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRecommendationId:(id)a0 assetInfo:(id)a1 sharedUserIdFromPlayableMusicAccount:(id)a2 punchoutURI:(id)a3 requiresSubscription:(id)a4 provider:(id)a5 isAvailable:(id)a6 isHardBan:(id)a7 bundleId:(id)a8 universalResourceLink:(id)a9 providerAppName:(id)a10 internalSignals:(id)a11 ampConfidenceScore:(id)a12 ampConfidenceLevel:(long long)a13 mediaSubItems:(id)a14;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRecommendationId:(id)a0 assetInfo:(id)a1 sharedUserIdFromPlayableMusicAccount:(id)a2 punchoutURI:(id)a3 mediaSubItems:(id)a4;
- (id)initWithRecommendationId:(id)a0 assetInfo:(id)a1 mediaSubItems:(id)a2;

@end
