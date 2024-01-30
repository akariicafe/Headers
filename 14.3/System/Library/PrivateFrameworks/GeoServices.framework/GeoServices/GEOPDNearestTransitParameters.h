@class PBUnknownFields;

@interface GEOPDNearestTransitParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _lineMuid;
    BOOL _isTransitOnly;
    struct { unsigned char has_lineMuid : 1; unsigned char has_isTransitOnly : 1; } _flags;
}

@property (nonatomic) BOOL hasLineMuid;
@property (nonatomic) unsigned long long lineMuid;
@property (nonatomic) BOOL hasIsTransitOnly;
@property (nonatomic) BOOL isTransitOnly;
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
- (id)initWithDictionary:(id)a0;

@end
