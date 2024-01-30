@class NSString;

@interface GEOSubactionMetaData : PBCodable <NSCopying> {
    NSString *_displayedString;
    int _selectedSubactionIndex;
    int _subactionType;
    struct { unsigned char has_selectedSubactionIndex : 1; unsigned char has_subactionType : 1; } _flags;
}

@property (nonatomic) BOOL hasSelectedSubactionIndex;
@property (nonatomic) int selectedSubactionIndex;
@property (nonatomic) BOOL hasSubactionType;
@property (nonatomic) int subactionType;
@property (readonly, nonatomic) BOOL hasDisplayedString;
@property (retain, nonatomic) NSString *displayedString;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (id)subactionTypeAsString:(int)a0;
- (int)StringAsSubactionType:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
