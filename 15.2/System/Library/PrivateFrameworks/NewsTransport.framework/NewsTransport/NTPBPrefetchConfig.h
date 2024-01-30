@interface NTPBPrefetchConfig : PBCodable <NSCopying> {
    struct { unsigned char backgroundFetchMinimumInterval : 1; unsigned char feedPrefetchFavoritesLimit : 1; unsigned char prefetchedForYouExpiration : 1; unsigned char backgroundFetchEnabled : 1; unsigned char backgroundFetchEnabled2 : 1; unsigned char feedPrefetchForYou : 1; } _has;
}

@property (nonatomic) BOOL hasBackgroundFetchEnabled;
@property (nonatomic) BOOL backgroundFetchEnabled;
@property (nonatomic) BOOL hasBackgroundFetchMinimumInterval;
@property (nonatomic) double backgroundFetchMinimumInterval;
@property (nonatomic) BOOL hasFeedPrefetchForYou;
@property (nonatomic) BOOL feedPrefetchForYou;
@property (nonatomic) BOOL hasFeedPrefetchFavoritesLimit;
@property (nonatomic) long long feedPrefetchFavoritesLimit;
@property (nonatomic) BOOL hasBackgroundFetchEnabled2;
@property (nonatomic) BOOL backgroundFetchEnabled2;
@property (nonatomic) BOOL hasPrefetchedForYouExpiration;
@property (nonatomic) long long prefetchedForYouExpiration;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
