@class NSMutableArray;

@interface GEORPSuggestionEntry : PBCodable <NSCopying> {
    NSMutableArray *_displayLines;
    unsigned int _serverSearchCompletionEntryIndex;
    unsigned int _serverSearchCompletionSectionIndex;
    int _type;
    struct { unsigned char has_serverSearchCompletionEntryIndex : 1; unsigned char has_serverSearchCompletionSectionIndex : 1; unsigned char has_type : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *displayLines;
@property (nonatomic) BOOL hasServerSearchCompletionSectionIndex;
@property (nonatomic) unsigned int serverSearchCompletionSectionIndex;
@property (nonatomic) BOOL hasServerSearchCompletionEntryIndex;
@property (nonatomic) unsigned int serverSearchCompletionEntryIndex;

+ (BOOL)isValid:(id)a0;
+ (Class)displayLineType;

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
- (int)StringAsType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)typeAsString:(int)a0;
- (void)addDisplayLine:(id)a0;
- (void)clearDisplayLines;
- (id)displayLineAtIndex:(unsigned long long)a0;
- (unsigned long long)displayLinesCount;

@end
