@interface HDEurotasData : HDHealthServiceCharacteristic

@property (readonly, nonatomic) BOOL hasHeartRate;
@property (readonly, nonatomic) unsigned short heartRate;
@property (readonly, nonatomic) BOOL hasActiveEnergy;
@property (readonly, nonatomic) unsigned short activeEnergy;
@property (readonly, nonatomic) BOOL hasTotalEnergy;
@property (readonly, nonatomic) unsigned short totalEnergy;
@property (readonly, nonatomic) BOOL hasAverageHeartRate;
@property (readonly, nonatomic) unsigned short averageHeartRate;

+ (id)uuid;

- (void)addAverageHeartRate:(unsigned short)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)getBinaryValueWithError:(id *)a0;
- (id)initForWriting;
- (void)addActiveEnergy:(unsigned short)a0;
- (void)addTotalEnergy:(unsigned short)a0;
- (void)addHeartRate:(unsigned short)a0;
- (BOOL)_appendUInt16Value:(unsigned short)a0 type:(unsigned char)a1 toData:(char **)a2 before:(const char *)a3;

@end
