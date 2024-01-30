@class NSString, NSMutableArray, PBDataReader;

@interface GEOPDPlaceSummaryLayoutUnitString : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_formats;
    NSMutableArray *_styleAttributes;
    NSString *_symbolColor;
    NSString *_symbolName;
    NSString *_textColor;
    NSString *_value;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _serverOverrideIdentifier;
    BOOL _supportMultiLineWrapping;
    struct { unsigned char has_serverOverrideIdentifier : 1; unsigned char has_supportMultiLineWrapping : 1; unsigned char read_formats : 1; unsigned char read_styleAttributes : 1; unsigned char read_symbolColor : 1; unsigned char read_symbolName : 1; unsigned char read_textColor : 1; unsigned char read_value : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSString *value;
@property (readonly, nonatomic) BOOL hasSymbolName;
@property (retain, nonatomic) NSString *symbolName;
@property (retain, nonatomic) NSMutableArray *formats;
@property (nonatomic) BOOL hasServerOverrideIdentifier;
@property (nonatomic) unsigned int serverOverrideIdentifier;
@property (nonatomic) BOOL hasSupportMultiLineWrapping;
@property (nonatomic) BOOL supportMultiLineWrapping;
@property (readonly, nonatomic) BOOL hasSymbolColor;
@property (retain, nonatomic) NSString *symbolColor;
@property (readonly, nonatomic) BOOL hasTextColor;
@property (retain, nonatomic) NSString *textColor;
@property (retain, nonatomic) NSMutableArray *styleAttributes;

+ (Class)styleAttributesType;
+ (BOOL)isValid:(id)a0;
+ (Class)formatType;

- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)addFormat:(id)a0;
- (unsigned long long)formatsCount;
- (void)addStyleAttributes:(id)a0;
- (void)clearFormats;
- (id)formatAtIndex:(unsigned long long)a0;
- (unsigned long long)styleAttributesCount;
- (void)clearStyleAttributes;
- (id)styleAttributesAtIndex:(unsigned long long)a0;
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
- (id)dictionaryRepresentation;

@end
