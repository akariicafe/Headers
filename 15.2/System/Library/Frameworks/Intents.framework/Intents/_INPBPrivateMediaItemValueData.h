@class NSString, NSArray;

@interface _INPBPrivateMediaItemValueData : PBCodable <_INPBPrivateMediaItemValueData, NSSecureCoding, NSCopying> {
    struct { unsigned char ampConfidenceLevel : 1; unsigned char ampConfidenceScore : 1; unsigned char isAvailable : 1; unsigned char isHardBan : 1; unsigned char requiresSubscription : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int ampConfidenceLevel;
@property (nonatomic) BOOL hasAmpConfidenceLevel;
@property (nonatomic) float ampConfidenceScore;
@property (nonatomic) BOOL hasAmpConfidenceScore;
@property (copy, nonatomic) NSString *assetInfo;
@property (readonly, nonatomic) BOOL hasAssetInfo;
@property (copy, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (copy, nonatomic) NSArray *internalSignals;
@property (readonly, nonatomic) unsigned long long internalSignalsCount;
@property (nonatomic) BOOL isAvailable;
@property (nonatomic) BOOL hasIsAvailable;
@property (nonatomic) BOOL isHardBan;
@property (nonatomic) BOOL hasIsHardBan;
@property (copy, nonatomic) NSArray *mediaSubItems;
@property (readonly, nonatomic) unsigned long long mediaSubItemsCount;
@property (copy, nonatomic) NSString *provider;
@property (readonly, nonatomic) BOOL hasProvider;
@property (copy, nonatomic) NSString *providerAppName;
@property (readonly, nonatomic) BOOL hasProviderAppName;
@property (copy, nonatomic) NSString *punchoutURI;
@property (readonly, nonatomic) BOOL hasPunchoutURI;
@property (copy, nonatomic) NSString *recommendationId;
@property (readonly, nonatomic) BOOL hasRecommendationId;
@property (nonatomic) BOOL requiresSubscription;
@property (nonatomic) BOOL hasRequiresSubscription;
@property (copy, nonatomic) NSString *sharedUserIdFromPlayableMusicAccount;
@property (readonly, nonatomic) BOOL hasSharedUserIdFromPlayableMusicAccount;
@property (copy, nonatomic) NSString *universalResourceLink;
@property (readonly, nonatomic) BOOL hasUniversalResourceLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)mediaSubItemsType;

- (id)ampConfidenceLevelAsString:(int)a0;
- (int)StringAsAmpConfidenceLevel:(id)a0;
- (void)clearInternalSignals;
- (void)addInternalSignal:(id)a0;
- (id)internalSignalAtIndex:(unsigned long long)a0;
- (void)clearMediaSubItems;
- (void)addMediaSubItems:(id)a0;
- (id)mediaSubItemsAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
