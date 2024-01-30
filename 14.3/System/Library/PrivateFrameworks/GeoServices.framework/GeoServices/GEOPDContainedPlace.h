@class GEOPDLinkedPlace, PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOPDContainedPlace : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_childPlaces;
    unsigned long long _featureId;
    GEOPDLinkedPlace *_parentPlace;
    NSMutableArray *_siblingPlaces;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_featureId : 1; unsigned char read_unknownFields : 1; unsigned char read_childPlaces : 1; unsigned char read_parentPlace : 1; unsigned char read_siblingPlaces : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasParentPlace;
@property (retain, nonatomic) GEOPDLinkedPlace *parentPlace;
@property (retain, nonatomic) NSMutableArray *childPlaces;
@property (nonatomic) BOOL hasFeatureId;
@property (nonatomic) unsigned long long featureId;
@property (retain, nonatomic) NSMutableArray *siblingPlaces;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)siblingPlaceType;
+ (Class)childPlaceType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void)clearChildPlaces;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (void)addSiblingPlace:(id)a0;
- (unsigned long long)siblingPlacesCount;
- (void)clearSiblingPlaces;
- (id)siblingPlaceAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)addChildPlace:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)childPlacesCount;
- (id)initWithDictionary:(id)a0;
- (id)childPlaceAtIndex:(unsigned long long)a0;

@end
