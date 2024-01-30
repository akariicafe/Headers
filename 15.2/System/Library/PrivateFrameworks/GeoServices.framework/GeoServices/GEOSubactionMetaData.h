@class NSString, NSMutableArray, PBDataReader;

@interface GEOSubactionMetaData : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _subactions;
    NSString *_displayedString;
    NSMutableArray *_displayedTexts;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _selectedSubactionIndex;
    int _subactionType;
    struct { unsigned char has_selectedSubactionIndex : 1; unsigned char has_subactionType : 1; unsigned char read_subactions : 1; unsigned char read_displayedString : 1; unsigned char read_displayedTexts : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasSelectedSubactionIndex;
@property (nonatomic) int selectedSubactionIndex;
@property (nonatomic) BOOL hasSubactionType;
@property (nonatomic) int subactionType;
@property (readonly, nonatomic) BOOL hasDisplayedString;
@property (retain, nonatomic) NSString *displayedString;
@property (readonly, nonatomic) unsigned long long subactionsCount;
@property (readonly, nonatomic) int *subactions;
@property (retain, nonatomic) NSMutableArray *displayedTexts;

+ (BOOL)isValid:(id)a0;
+ (Class)displayedTextType;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)addSubaction:(int)a0;
- (void)addDisplayedText:(id)a0;
- (void)clearSubactions;
- (int)subactionAtIndex:(unsigned long long)a0;
- (unsigned long long)displayedTextsCount;
- (void)clearDisplayedTexts;
- (id)displayedTextAtIndex:(unsigned long long)a0;
- (id)subactionTypeAsString:(int)a0;
- (int)StringAsSubactionType:(id)a0;
- (void)setSubactions:(int *)a0 count:(unsigned long long)a1;
- (id)subactionsAsString:(int)a0;
- (int)StringAsSubactions:(id)a0;
- (id)dictionaryRepresentation;

@end
