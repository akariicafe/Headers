@class NSString, PBUnknownFields;

@interface GEORPRapInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_rapId;
    BOOL _isReviewed;
    struct { unsigned char has_isReviewed : 1; } _flags;
}

@property (nonatomic) BOOL hasIsReviewed;
@property (nonatomic) BOOL isReviewed;
@property (readonly, nonatomic) BOOL hasRapId;
@property (retain, nonatomic) NSString *rapId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
