@class NSString, GEOMapRegionE7, NSMutableArray, PBDataReader;

@interface GEOLPRRestrictionRegion : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_convertRules;
    NSMutableArray *_definedPlateTypes;
    NSString *_identifier;
    GEOMapRegionE7 *_mapRegion;
    NSString *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_convertRules : 1; unsigned char read_definedPlateTypes : 1; unsigned char read_identifier : 1; unsigned char read_mapRegion : 1; unsigned char read_name : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (retain, nonatomic) GEOMapRegionE7 *mapRegion;
@property (retain, nonatomic) NSMutableArray *definedPlateTypes;
@property (retain, nonatomic) NSMutableArray *convertRules;

+ (Class)definedPlateTypesType;
+ (Class)convertRuleType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (void)addDefinedPlateTypes:(id)a0;
- (void)addConvertRule:(id)a0;
- (unsigned long long)definedPlateTypesCount;
- (void)clearDefinedPlateTypes;
- (id)definedPlateTypesAtIndex:(unsigned long long)a0;
- (unsigned long long)convertRulesCount;
- (void)clearConvertRules;
- (id)convertRuleAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
