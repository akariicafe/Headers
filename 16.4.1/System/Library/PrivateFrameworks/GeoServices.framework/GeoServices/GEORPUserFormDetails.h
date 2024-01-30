@class PBUnknownFields;

@interface GEORPUserFormDetails : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _userFormStyle;
    struct { unsigned char has_userFormStyle : 1; } _flags;
}

@property (nonatomic) BOOL hasUserFormStyle;
@property (nonatomic) int userFormStyle;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (int)StringAsUserFormStyle:(id)a0;
- (id)userFormStyleAsString:(int)a0;

@end
