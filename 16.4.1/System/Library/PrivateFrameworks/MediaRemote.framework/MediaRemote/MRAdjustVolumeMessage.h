@class NSString;

@interface MRAdjustVolumeMessage : MRProtocolMessage

@property (readonly, nonatomic) long long adjustment;
@property (readonly, nonatomic) NSString *outputDeviceUID;

- (unsigned long long)type;
- (id)initWithAdjustment:(long long)a0 outputDeviceUID:(id)a1;

@end
