@class NSArray;

@interface MRRemoveSyncedOutputDevicesMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *outputDeviceUIDs;

- (id)initWithOutputDeviceUID:(id)a0;
- (unsigned long long)type;
- (id)initWithOutputDeviceUIDs:(id)a0;

@end
