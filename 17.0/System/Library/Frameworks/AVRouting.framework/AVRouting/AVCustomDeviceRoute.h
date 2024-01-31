@class NSUUID, DADevice, NSObject;
@protocol OS_nw_endpoint;

@interface AVCustomDeviceRoute : NSObject

@property (retain, nonatomic) DADevice *device;
@property (nonatomic) NSObject<OS_nw_endpoint> *networkEndpoint;
@property (nonatomic) NSUUID *bluetoothIdentifier;
@property (nonatomic, getter=isActive) BOOL active;

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
