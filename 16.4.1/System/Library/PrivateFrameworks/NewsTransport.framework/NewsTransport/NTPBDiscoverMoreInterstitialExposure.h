@class NSString;

@interface NTPBDiscoverMoreInterstitialExposure : PBCodable <NSCopying> {
    struct { unsigned char nextArticleAffordanceType : 1; unsigned char userAction : 1; unsigned char withNextArticleAffordance : 1; } _has;
}

@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) BOOL hasWithNextArticleAffordance;
@property (nonatomic) BOOL withNextArticleAffordance;
@property (nonatomic) BOOL hasNextArticleAffordanceType;
@property (nonatomic) int nextArticleAffordanceType;
@property (readonly, nonatomic) BOOL hasTappedNextArticleAffordanceFeedId;
@property (retain, nonatomic) NSString *tappedNextArticleAffordanceFeedId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsNextArticleAffordanceType:(id)a0;
- (id)nextArticleAffordanceTypeAsString:(int)a0;

@end
