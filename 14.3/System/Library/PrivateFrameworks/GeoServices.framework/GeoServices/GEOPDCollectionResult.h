@class PBDataReader, GEOPDMapsIdentifier, NSMutableArray, PBUnknownFields;

@interface GEOPDCollectionResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDMapsIdentifier *_collectionId;
    NSMutableArray *_components;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _status;
    struct { unsigned char has_status : 1; unsigned char read_unknownFields : 1; unsigned char read_collectionId : 1; unsigned char read_components : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCollectionId;
@property (retain, nonatomic) GEOPDMapsIdentifier *collectionId;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *components;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)componentType;
+ (BOOL)isValid:(id)a0;

- (void)addComponent:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)componentAtIndex:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsStatus:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)statusAsString:(int)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearComponents;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)componentsCount;

@end
