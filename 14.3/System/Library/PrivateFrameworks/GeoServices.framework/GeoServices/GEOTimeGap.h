@class PBUnknownFields;

@interface GEOTimeGap : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _seconds;
    unsigned int _subsequentEventId;
    BOOL _ifChained;
    struct { unsigned char has_seconds : 1; unsigned char has_subsequentEventId : 1; unsigned char has_ifChained : 1; } _flags;
}

@property (nonatomic) BOOL hasSubsequentEventId;
@property (nonatomic) unsigned int subsequentEventId;
@property (nonatomic) BOOL hasSeconds;
@property (nonatomic) unsigned int seconds;
@property (nonatomic) BOOL hasIfChained;
@property (nonatomic) BOOL ifChained;
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
