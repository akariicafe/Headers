@class PBUnknownFields, GEOPDLocatedInsideInfo, PBDataReader, NSMutableArray, GEOPDVenueItemList;

@interface GEOPDVenueInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_filterElements;
    GEOPDVenueItemList *_itemList;
    GEOPDLocatedInsideInfo *_locatedInside;
    NSMutableArray *_venueFeatureIds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _featureType;
    int _goInsideLevel;
    struct { unsigned char has_featureType : 1; unsigned char has_goInsideLevel : 1; unsigned char read_unknownFields : 1; unsigned char read_filterElements : 1; unsigned char read_itemList : 1; unsigned char read_locatedInside : 1; unsigned char read_venueFeatureIds : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *venueFeatureIds;
@property (nonatomic) BOOL hasFeatureType;
@property (nonatomic) int featureType;
@property (readonly, nonatomic) BOOL hasItemList;
@property (retain, nonatomic) GEOPDVenueItemList *itemList;
@property (readonly, nonatomic) BOOL hasLocatedInside;
@property (retain, nonatomic) GEOPDLocatedInsideInfo *locatedInside;
@property (retain, nonatomic) NSMutableArray *filterElements;
@property (nonatomic) BOOL hasGoInsideLevel;
@property (nonatomic) int goInsideLevel;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)venueInfoForPlaceData:(id)a0;
+ (Class)filterElementType;
+ (Class)venueFeatureIdType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (id)featureTypeAsString:(int)a0;
- (int)StringAsFeatureType:(id)a0;
- (void)addVenueFeatureId:(id)a0;
- (void)addFilterElement:(id)a0;
- (unsigned long long)venueFeatureIdsCount;
- (void)clearVenueFeatureIds;
- (id)venueFeatureIdAtIndex:(unsigned long long)a0;
- (unsigned long long)filterElementsCount;
- (void)clearFilterElements;
- (id)filterElementAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
