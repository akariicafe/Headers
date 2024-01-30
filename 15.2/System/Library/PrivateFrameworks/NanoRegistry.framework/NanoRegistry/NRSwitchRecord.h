@interface NRSwitchRecord : NRPBSwitchRecord <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithDeviceID:(id)a0 date:(id)a1 switchIndex:(unsigned int)a2;

@end
