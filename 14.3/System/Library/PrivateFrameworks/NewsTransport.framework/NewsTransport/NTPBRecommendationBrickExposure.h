@class NSString, NSMutableArray;

@interface NTPBRecommendationBrickExposure : PBCodable <NSCopying> {
    struct { unsigned char feedType : 1; unsigned char recommendationBrickType : 1; unsigned char exposedFromReferredUser : 1; } _has;
}

@property (nonatomic) BOOL hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (retain, nonatomic) NSMutableArray *recommendedFeedIds;
@property (nonatomic) BOOL hasRecommendationBrickType;
@property (nonatomic) int recommendationBrickType;
@property (nonatomic) BOOL hasExposedFromReferredUser;
@property (nonatomic) BOOL exposedFromReferredUser;

+ (Class)recommendedFeedIdsType;

- (int)StringAsFeedType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)recommendationBrickTypeAsString:(int)a0;
- (int)StringAsRecommendationBrickType:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addRecommendedFeedIds:(id)a0;
- (void)clearRecommendedFeedIds;
- (unsigned long long)recommendedFeedIdsCount;
- (id)recommendedFeedIdsAtIndex:(unsigned long long)a0;
- (id)feedTypeAsString:(int)a0;

@end
