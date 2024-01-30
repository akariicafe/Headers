@class NSArray;

@interface MRRemoveOutputDevicesMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *outputDeviceUIDs;

- (id)initWithOutputDeviceUIDs:(id)a0;
- (unsigned long long)type;

@end
