@class NSMutableArray;

@interface GEOPDPlaceSummaryLayoutLine : PBCodable <NSCopying> {
    NSMutableArray *_units;
    BOOL _isDynamicContextLine;
    BOOL _shouldOmitSpacingDelimiter;
    struct { unsigned char has_isDynamicContextLine : 1; unsigned char has_shouldOmitSpacingDelimiter : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *units;
@property (nonatomic) BOOL hasIsDynamicContextLine;
@property (nonatomic) BOOL isDynamicContextLine;
@property (nonatomic) BOOL hasShouldOmitSpacingDelimiter;
@property (nonatomic) BOOL shouldOmitSpacingDelimiter;

+ (Class)unitType;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)addUnit:(id)a0;
- (id)unitAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)unitsCount;
- (void)clearUnits;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
