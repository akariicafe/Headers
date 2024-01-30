@class NSString, NSMutableArray, BMPBSocialHighlightContact;

@interface BMPBRankableSocialHighlight : PBCodable <NSCopying> {
    struct { unsigned char contentCreationSecondsSinceReferenceDate : 1; unsigned char rankingSecondsSinceReferenceDate : 1; unsigned char score : 1; unsigned char syndicationSecondsSinceReferenceDate : 1; unsigned char highlightType : 1; unsigned char rank : 1; unsigned char isConversationAutoDonating : 1; unsigned char isPrimary : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasHighlightIdentifier;
@property (retain, nonatomic) NSString *highlightIdentifier;
@property (nonatomic) BOOL hasHighlightType;
@property (nonatomic) int highlightType;
@property (nonatomic) BOOL hasSyndicationSecondsSinceReferenceDate;
@property (nonatomic) double syndicationSecondsSinceReferenceDate;
@property (readonly, nonatomic) BOOL hasSourceBundleId;
@property (retain, nonatomic) NSString *sourceBundleId;
@property (retain, nonatomic) NSMutableArray *applicationIdentifiers;
@property (readonly, nonatomic) BOOL hasResourceUrl;
@property (retain, nonatomic) NSString *resourceUrl;
@property (readonly, nonatomic) BOOL hasSender;
@property (retain, nonatomic) BMPBSocialHighlightContact *sender;
@property (readonly, nonatomic) BOOL hasDomainIdentifier;
@property (retain, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) BOOL hasBatchIdentifier;
@property (retain, nonatomic) NSString *batchIdentifier;
@property (retain, nonatomic) NSMutableArray *calculatedFeatures;
@property (readonly, nonatomic) BOOL hasClientIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (nonatomic) BOOL hasContentCreationSecondsSinceReferenceDate;
@property (nonatomic) double contentCreationSecondsSinceReferenceDate;
@property (readonly, nonatomic) BOOL hasGroupPhotoPathDigest;
@property (retain, nonatomic) NSString *groupPhotoPathDigest;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL hasIsPrimary;
@property (nonatomic) BOOL isPrimary;
@property (readonly, nonatomic) BOOL hasAttributionIdentifier;
@property (retain, nonatomic) NSString *attributionIdentifier;
@property (nonatomic) BOOL hasRank;
@property (nonatomic) unsigned int rank;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;
@property (nonatomic) BOOL hasIsConversationAutoDonating;
@property (nonatomic) BOOL isConversationAutoDonating;
@property (readonly, nonatomic) BOOL hasOriginatingDeviceId;
@property (retain, nonatomic) NSString *originatingDeviceId;
@property (nonatomic) BOOL hasRankingSecondsSinceReferenceDate;
@property (nonatomic) double rankingSecondsSinceReferenceDate;
@property (readonly, nonatomic) BOOL hasResolvedUrl;
@property (retain, nonatomic) NSString *resolvedUrl;
@property (readonly, nonatomic) BOOL hasClientVariant;
@property (retain, nonatomic) NSString *clientVariant;

+ (Class)applicationIdentifiersType;
+ (Class)calculatedFeaturesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsHighlightType:(id)a0;
- (void)addApplicationIdentifiers:(id)a0;
- (void)addCalculatedFeatures:(id)a0;
- (id)applicationIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)applicationIdentifiersCount;
- (id)calculatedFeaturesAtIndex:(unsigned long long)a0;
- (unsigned long long)calculatedFeaturesCount;
- (void)clearApplicationIdentifiers;
- (void)clearCalculatedFeatures;
- (id)highlightTypeAsString:(int)a0;

@end
