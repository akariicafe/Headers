@class NSMutableArray;

@interface GEORPDebugSettings : PBCodable <NSCopying> {
    NSMutableArray *_keywords;
    int _mode;
    struct { unsigned char has_mode : 1; } _flags;
}

@property (nonatomic) BOOL hasMode;
@property (nonatomic) int mode;
@property (retain, nonatomic) NSMutableArray *keywords;

+ (BOOL)isValid:(id)a0;
+ (Class)keywordsType;

- (int)StringAsMode:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)modeAsString:(int)a0;
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
- (void).cxx_destruct;
- (void)addKeywords:(id)a0;
- (void)clearKeywords;
- (id)keywordsAtIndex:(unsigned long long)a0;
- (unsigned long long)keywordsCount;

@end
