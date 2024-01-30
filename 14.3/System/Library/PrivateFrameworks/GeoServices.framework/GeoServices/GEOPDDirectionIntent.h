@class GEOPDResolvedItem, PBDataReader, PBUnknownFields;

@interface GEOPDDirectionIntent : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDResolvedItem *_destination;
    GEOPDResolvedItem *_origin;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _transportType;
    struct { unsigned char has_transportType : 1; unsigned char read_unknownFields : 1; unsigned char read_destination : 1; unsigned char read_origin : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasOrigin;
@property (retain, nonatomic) GEOPDResolvedItem *origin;
@property (readonly, nonatomic) BOOL hasDestination;
@property (retain, nonatomic) GEOPDResolvedItem *destination;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (int)StringAsTransportType:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)transportTypeAsString:(int)a0;

@end
