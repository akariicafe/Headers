@class NSMutableArray, PBDataReader;

@interface GEOPDPlaceSummaryLayoutMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_dyanmicContextServerOverrides;
    NSMutableArray *_layoutTemplatePairs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _useCaseType;
    struct { unsigned char has_useCaseType : 1; unsigned char read_dyanmicContextServerOverrides : 1; unsigned char read_layoutTemplatePairs : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasUseCaseType;
@property (nonatomic) int useCaseType;
@property (retain, nonatomic) NSMutableArray *layoutTemplatePairs;
@property (retain, nonatomic) NSMutableArray *dyanmicContextServerOverrides;

+ (Class)layoutTemplatePairType;
+ (Class)dyanmicContextServerOverrideType;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (void)addLayoutTemplatePair:(id)a0;
- (void)addDyanmicContextServerOverride:(id)a0;
- (unsigned long long)layoutTemplatePairsCount;
- (void)clearLayoutTemplatePairs;
- (id)layoutTemplatePairAtIndex:(unsigned long long)a0;
- (unsigned long long)dyanmicContextServerOverridesCount;
- (void)clearDyanmicContextServerOverrides;
- (id)dyanmicContextServerOverrideAtIndex:(unsigned long long)a0;
- (id)useCaseTypeAsString:(int)a0;
- (int)StringAsUseCaseType:(id)a0;
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
- (id)dictionaryRepresentation;

@end
