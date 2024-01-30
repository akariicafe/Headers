@class GEOTouristInfo;

@interface GEOLogMsgEventCuratedCollectionUsage : PBCodable <NSCopying> {
    double _collectionFirstViewedDate;
    double _collectionLastViewedDate;
    unsigned long long _collectionMuid;
    GEOTouristInfo *_touristInfo;
    unsigned int _viewsToday;
    struct { unsigned char has_collectionFirstViewedDate : 1; unsigned char has_collectionLastViewedDate : 1; unsigned char has_collectionMuid : 1; unsigned char has_viewsToday : 1; } _flags;
}

@property (nonatomic) BOOL hasCollectionMuid;
@property (nonatomic) unsigned long long collectionMuid;
@property (nonatomic) BOOL hasViewsToday;
@property (nonatomic) unsigned int viewsToday;
@property (nonatomic) BOOL hasCollectionFirstViewedDate;
@property (nonatomic) double collectionFirstViewedDate;
@property (nonatomic) BOOL hasCollectionLastViewedDate;
@property (nonatomic) double collectionLastViewedDate;
@property (readonly, nonatomic) BOOL hasTouristInfo;
@property (retain, nonatomic) GEOTouristInfo *touristInfo;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
