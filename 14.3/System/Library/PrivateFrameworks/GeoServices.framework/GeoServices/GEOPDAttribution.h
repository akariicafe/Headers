@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDAttribution : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_actionUrlComponent;
    NSMutableArray *_attributionUrls;
    NSString *_externalComponentId;
    NSString *_externalItemId;
    NSString *_vendorId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_actionUrlComponent : 1; unsigned char read_attributionUrls : 1; unsigned char read_externalComponentId : 1; unsigned char read_externalItemId : 1; unsigned char read_vendorId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasVendorId;
@property (retain, nonatomic) NSString *vendorId;
@property (readonly, nonatomic) BOOL hasExternalItemId;
@property (retain, nonatomic) NSString *externalItemId;
@property (readonly, nonatomic) BOOL hasExternalComponentId;
@property (retain, nonatomic) NSString *externalComponentId;
@property (retain, nonatomic) NSMutableArray *attributionUrls;
@property (readonly, nonatomic) BOOL hasActionUrlComponent;
@property (retain, nonatomic) NSString *actionUrlComponent;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)attributionForPlaceDataEntity:(id)a0;
+ (Class)attributionUrlType;
+ (id)attributionForPlaceDataEncyclopedia:(id)a0;
+ (id)attributionForPlaceDataReview:(id)a0;
+ (id)attributionForPlaceDataPhotos:(id)a0;
+ (id)attributionForPlaceDataRestaurantReservationLink:(id)a0;
+ (id)attributionForAnnotatedItemList:(id)a0 placeData:(id)a1;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)clearAttributionUrls;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)attributionUrlsCount;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)addAttributionUrl:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)_isYelp;
- (id)attributionUrlAtIndex:(unsigned long long)a0;

@end
