@class VRFWitness, NSMutableArray;

@interface QueryResponse_DeviceWitness : GPBMessage

@property (retain, nonatomic) VRFWitness *deviceIdWitness;
@property (nonatomic) BOOL hasDeviceIdWitness;
@property (retain, nonatomic) NSMutableArray *clientDataWitnessArray;
@property (readonly, nonatomic) unsigned long long clientDataWitnessArray_Count;

+ (id)descriptor;

@end
