@class NSMutableArray, PBDataReader;

@interface GEOLPRLPRConvertRule : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_fillRules;
    NSMutableArray *_mapRules;
    NSMutableArray *_pickupRules;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _validEndTime;
    unsigned int _validStartTime;
    struct { unsigned char has_validEndTime : 1; unsigned char has_validStartTime : 1; unsigned char read_fillRules : 1; unsigned char read_mapRules : 1; unsigned char read_pickupRules : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *pickupRules;
@property (retain, nonatomic) NSMutableArray *mapRules;
@property (retain, nonatomic) NSMutableArray *fillRules;
@property (nonatomic) BOOL hasValidStartTime;
@property (nonatomic) unsigned int validStartTime;
@property (nonatomic) BOOL hasValidEndTime;
@property (nonatomic) unsigned int validEndTime;

+ (Class)mapRuleType;
+ (Class)fillRuleType;
+ (Class)pickupRuleType;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addMapRule:(id)a0;
- (void)addFillRule:(id)a0;
- (void)addPickupRule:(id)a0;
- (unsigned long long)pickupRulesCount;
- (void)clearPickupRules;
- (id)pickupRuleAtIndex:(unsigned long long)a0;
- (unsigned long long)mapRulesCount;
- (void)clearMapRules;
- (id)mapRuleAtIndex:(unsigned long long)a0;
- (unsigned long long)fillRulesCount;
- (void)clearFillRules;
- (id)fillRuleAtIndex:(unsigned long long)a0;
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
