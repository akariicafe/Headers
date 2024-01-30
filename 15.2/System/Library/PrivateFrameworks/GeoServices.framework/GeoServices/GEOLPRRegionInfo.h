@class NSString, NSMutableArray, PBDataReader;

@interface GEOLPRRegionInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _routingRequiredFields;
    NSString *_licensePlateTemplate;
    NSMutableArray *_licensePlateValidationRules;
    NSMutableArray *_validPowerTypeKeys;
    NSMutableArray *_validVehicleTypeKeys;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_routingRequiredFields : 1; unsigned char read_licensePlateTemplate : 1; unsigned char read_licensePlateValidationRules : 1; unsigned char read_validPowerTypeKeys : 1; unsigned char read_validVehicleTypeKeys : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long routingRequiredFieldsCount;
@property (readonly, nonatomic) int *routingRequiredFields;
@property (retain, nonatomic) NSMutableArray *validPowerTypeKeys;
@property (retain, nonatomic) NSMutableArray *validVehicleTypeKeys;
@property (readonly, nonatomic) BOOL hasLicensePlateTemplate;
@property (retain, nonatomic) NSString *licensePlateTemplate;
@property (retain, nonatomic) NSMutableArray *licensePlateValidationRules;

+ (Class)validPowerTypeKeysType;
+ (Class)validVehicleTypeKeysType;
+ (Class)licensePlateValidationRulesType;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (void)addRoutingRequiredFields:(int)a0;
- (void)addValidPowerTypeKeys:(id)a0;
- (void)addValidVehicleTypeKeys:(id)a0;
- (unsigned long long)validPowerTypeKeysCount;
- (void)addLicensePlateValidationRules:(id)a0;
- (void)clearRoutingRequiredFields;
- (int)routingRequiredFieldsAtIndex:(unsigned long long)a0;
- (void)clearValidPowerTypeKeys;
- (id)validPowerTypeKeysAtIndex:(unsigned long long)a0;
- (unsigned long long)validVehicleTypeKeysCount;
- (void)clearValidVehicleTypeKeys;
- (id)validVehicleTypeKeysAtIndex:(unsigned long long)a0;
- (unsigned long long)licensePlateValidationRulesCount;
- (void)clearLicensePlateValidationRules;
- (id)licensePlateValidationRulesAtIndex:(unsigned long long)a0;
- (void)setRoutingRequiredFields:(int *)a0 count:(unsigned long long)a1;
- (id)routingRequiredFieldsAsString:(int)a0;
- (int)StringAsRoutingRequiredFields:(id)a0;
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
- (id)dictionaryRepresentation;

@end
