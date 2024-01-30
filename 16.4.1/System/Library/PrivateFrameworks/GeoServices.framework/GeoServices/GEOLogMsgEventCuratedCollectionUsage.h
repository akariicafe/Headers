@class NSString, PBDataReader, GEOTouristInfo;

@interface GEOLogMsgEventCuratedCollectionUsage : PBCodable <NSCopying> {
    PBDataReader *_reader;
    double _collectionFirstViewedDate;
    double _collectionLastViewedDate;
    unsigned long long _collectionMuid;
    NSString *_homeCountryCode;
    NSString *_homeMetroRegion;
    GEOTouristInfo *_touristInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _viewsToday;
    struct { unsigned char has_collectionFirstViewedDate : 1; unsigned char has_collectionLastViewedDate : 1; unsigned char has_collectionMuid : 1; unsigned char has_viewsToday : 1; unsigned char read_homeCountryCode : 1; unsigned char read_homeMetroRegion : 1; unsigned char read_touristInfo : 1; unsigned char wrote_anyField : 1; } _flags;
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
@property (readonly, nonatomic) BOOL hasHomeCountryCode;
@property (retain, nonatomic) NSString *homeCountryCode;
@property (readonly, nonatomic) BOOL hasHomeMetroRegion;
@property (retain, nonatomic) NSString *homeMetroRegion;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
