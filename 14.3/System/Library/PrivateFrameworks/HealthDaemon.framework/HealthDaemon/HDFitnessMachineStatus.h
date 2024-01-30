@interface HDFitnessMachineStatus : HDHealthServiceCharacteristic

@property (nonatomic) unsigned long long machineState;

+ (id)uuid;
+ (id)_buildWithBinaryValue:(id)a0 error:(id *)a1;
+ (id)unitTest_fakeStatusUpdateForState:(unsigned long long)a0;

- (id)description;

@end
