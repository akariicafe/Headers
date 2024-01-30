@class PBUnknownFields;

@interface GEOTransitTransferInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _transferMuid;
    unsigned int _transferTime;
    struct { unsigned char has_transferMuid : 1; unsigned char has_transferTime : 1; } _flags;
}

@property (nonatomic) BOOL hasTransferMuid;
@property (nonatomic) unsigned long long transferMuid;
@property (nonatomic) BOOL hasTransferTime;
@property (nonatomic) unsigned int transferTime;
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
