@class NSString, NSData;

@interface SISchemaCarPlayHeadUnitContext : PBCodable

@property (copy, nonatomic) NSString *vehicleName;
@property (nonatomic) BOOL hasVehicleName;
@property (copy, nonatomic) NSString *vehicleModel;
@property (nonatomic) BOOL hasVehicleModel;
@property (copy, nonatomic) NSString *vehicleManufacturer;
@property (nonatomic) BOOL hasVehicleManufacturer;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
