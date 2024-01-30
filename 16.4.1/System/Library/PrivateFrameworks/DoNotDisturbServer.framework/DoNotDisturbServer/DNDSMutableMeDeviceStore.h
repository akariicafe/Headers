@class NSNumber, NSString;

@interface DNDSMutableMeDeviceStore : DNDSMeDeviceStore

@property (copy, nonatomic) NSNumber *meDeviceStatus;
@property (copy, nonatomic) NSString *meDeviceName;

- (void)setMeDeviceName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setMeDeviceStatus:(id)a0;

@end
