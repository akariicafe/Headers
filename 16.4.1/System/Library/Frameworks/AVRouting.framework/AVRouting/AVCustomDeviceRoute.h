@class NSUUID, DADevice, NSObject;
@protocol OS_nw_endpoint;

@interface AVCustomDeviceRoute : NSObject

@property (retain, nonatomic) DADevice *device;
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *networkEndpoint;
@property (retain, nonatomic) NSUUID *bluetoothIdentifier;
@property (nonatomic, getter=isActive) BOOL active;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
