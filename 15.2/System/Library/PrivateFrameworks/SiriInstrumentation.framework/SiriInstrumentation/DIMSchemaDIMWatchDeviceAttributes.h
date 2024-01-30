@class NSData;

@interface DIMSchemaDIMWatchDeviceAttributes : SISchemaInstrumentationMessage {
    struct { unsigned char isSatellitePaired : 1; unsigned char watchArmOrientation : 1; } _has;
}

@property (nonatomic) BOOL isSatellitePaired;
@property (nonatomic) BOOL hasIsSatellitePaired;
@property (nonatomic) int watchArmOrientation;
@property (nonatomic) BOOL hasWatchArmOrientation;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
