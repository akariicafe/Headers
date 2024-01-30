@class NSMutableArray, PBUnknownFields;

@interface GEOLanguage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_languages;
    unsigned int _identifier;
}

@property (nonatomic) unsigned int identifier;
@property (retain, nonatomic) NSMutableArray *languages;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)languageType;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (void)clearLanguages;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addLanguage:(id)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)languageAtIndex:(unsigned long long)a0;
- (unsigned long long)languagesCount;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
