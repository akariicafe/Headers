@class PBDataReader, NSString, GEOPDMapsIdentifier, NSMutableArray, PBUnknownFields;

@interface GEOPDPlaceCollectionItem : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_itemDescriptions;
    GEOPDMapsIdentifier *_itemId;
    NSMutableArray *_photos;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _enableImageFallback;
    struct { unsigned char has_enableImageFallback : 1; unsigned char read_unknownFields : 1; unsigned char read_itemDescriptions : 1; unsigned char read_itemId : 1; unsigned char read_photos : 1; unsigned char read_url : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasItemId;
@property (retain, nonatomic) GEOPDMapsIdentifier *itemId;
@property (retain, nonatomic) NSMutableArray *photos;
@property (retain, nonatomic) NSMutableArray *itemDescriptions;
@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) BOOL hasEnableImageFallback;
@property (nonatomic) BOOL enableImageFallback;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)photoType;
+ (Class)itemDescriptionType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (unsigned long long)photosCount;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)addPhoto:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (id)photoAtIndex:(unsigned long long)a0;
- (void)clearPhotos;
- (void)addItemDescription:(id)a0;
- (unsigned long long)itemDescriptionsCount;
- (void)clearItemDescriptions;
- (id)itemDescriptionAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)itemDescription;

@end
