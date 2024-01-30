@class PBUnknownFields;

@interface GEOPDSTransportHint : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _transportType;
    struct { unsigned char has_transportType : 1; } _flags;
}

@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(BOOL)a0;
- (int)StringAsTransportType:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)transportTypeAsString:(int)a0;

@end
