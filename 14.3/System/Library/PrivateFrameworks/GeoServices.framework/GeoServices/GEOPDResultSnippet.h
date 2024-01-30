@class PBDataReader, NSString, GEOPDRating, GEOPDPriceDescription, NSMutableArray, PBUnknownFields;

@interface GEOPDResultSnippet : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_category;
    NSMutableArray *_childItems;
    NSMutableArray *_childPlaces;
    NSString *_locationString;
    NSString *_name;
    GEOPDPriceDescription *_priceDescription;
    GEOPDRating *_priceRange;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _distanceDisplayThreshold;
    struct { unsigned char has_distanceDisplayThreshold : 1; unsigned char read_unknownFields : 1; unsigned char read_category : 1; unsigned char read_childItems : 1; unsigned char read_childPlaces : 1; unsigned char read_locationString : 1; unsigned char read_name : 1; unsigned char read_priceDescription : 1; unsigned char read_priceRange : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSString *category;
@property (readonly, nonatomic) BOOL hasPriceRange;
@property (retain, nonatomic) GEOPDRating *priceRange;
@property (readonly, nonatomic) BOOL hasLocationString;
@property (retain, nonatomic) NSString *locationString;
@property (nonatomic) BOOL hasDistanceDisplayThreshold;
@property (nonatomic) unsigned int distanceDisplayThreshold;
@property (retain, nonatomic) NSMutableArray *childPlaces;
@property (readonly, nonatomic) BOOL hasPriceDescription;
@property (retain, nonatomic) GEOPDPriceDescription *priceDescription;
@property (retain, nonatomic) NSMutableArray *childItems;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)childItemType;
+ (Class)childPlaceType;
+ (id)resultSnippetForPlaceData:(id)a0;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void)clearChildPlaces;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)addChildPlace:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)childItemAtIndex:(unsigned long long)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)childPlacesCount;
- (id)initWithDictionary:(id)a0;
- (void)clearChildItems;
- (id)childPlaceAtIndex:(unsigned long long)a0;
- (void)addChildItem:(id)a0;
- (unsigned long long)childItemsCount;

@end
