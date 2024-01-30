@interface HDBodySensorLocation : HDHealthServiceCharacteristic

@property (nonatomic) long long sensorLocation;

+ (id)uuid;
+ (id)_buildWithBinaryValue:(id)a0 error:(id *)a1;

- (id)description;

@end
