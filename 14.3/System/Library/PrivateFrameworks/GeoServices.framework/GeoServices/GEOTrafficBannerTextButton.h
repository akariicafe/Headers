@class GEOFormattedString, PBUnknownFields;

@interface GEOTrafficBannerTextButton : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_text;
    int _action;
    struct { unsigned char has_action : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasText;
@property (retain, nonatomic) GEOFormattedString *text;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) int action;
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
- (id)actionAsString:(int)a0;
- (int)StringAsAction:(id)a0;

@end
