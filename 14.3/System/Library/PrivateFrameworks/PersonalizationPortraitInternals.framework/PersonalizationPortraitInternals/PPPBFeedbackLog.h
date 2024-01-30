@class NSString, NSMutableArray, PPPBFeedbackMetadata;

@interface PPPBFeedbackLog : PBCodable <NSCopying> {
    struct { unsigned char predictionType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFeedbackMetadata;
@property (retain, nonatomic) PPPBFeedbackMetadata *feedbackMetadata;
@property (nonatomic) BOOL hasPredictionType;
@property (nonatomic) int predictionType;
@property (retain, nonatomic) NSMutableArray *scoredItems;
@property (retain, nonatomic) NSMutableArray *extractedDonations;
@property (retain, nonatomic) NSMutableArray *experimentalGroups;
@property (readonly, nonatomic) BOOL hasHomeLocationGeohash;
@property (retain, nonatomic) NSString *homeLocationGeohash;
@property (readonly, nonatomic) BOOL hasAssetVersion;
@property (retain, nonatomic) NSString *assetVersion;

+ (Class)scoredItemsType;
+ (Class)extractedDonationsType;
+ (Class)experimentalGroupsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearScoredItems;
- (void)addScoredItems:(id)a0;
- (unsigned long long)scoredItemsCount;
- (id)scoredItemsAtIndex:(unsigned long long)a0;
- (void)clearExtractedDonations;
- (void)addExtractedDonations:(id)a0;
- (unsigned long long)extractedDonationsCount;
- (id)extractedDonationsAtIndex:(unsigned long long)a0;
- (void)clearExperimentalGroups;
- (void)addExperimentalGroups:(id)a0;
- (unsigned long long)experimentalGroupsCount;
- (id)experimentalGroupsAtIndex:(unsigned long long)a0;

@end
