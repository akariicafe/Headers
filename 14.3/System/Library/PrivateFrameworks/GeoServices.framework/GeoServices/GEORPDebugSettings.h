@class NSMutableArray;

@interface GEORPDebugSettings : PBCodable <NSCopying> {
    NSMutableArray *_keywords;
    int _mode;
    struct { unsigned char has_mode : 1; } _flags;
}

@property (nonatomic) BOOL hasMode;
@property (nonatomic) int mode;
@property (retain, nonatomic) NSMutableArray *keywords;

+ (Class)keywordsType;
+ (BOOL)isValid:(id)a0;

- (void)addKeywords:(id)a0;
- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)keywordsCount;
- (void)clearKeywords;
- (id)keywordsAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)modeAsString:(int)a0;
- (void)copyTo:(id)a0;
- (int)StringAsMode:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
