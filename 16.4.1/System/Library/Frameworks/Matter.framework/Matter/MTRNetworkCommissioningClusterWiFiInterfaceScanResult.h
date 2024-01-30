@class NSNumber, NSData;

@interface MTRNetworkCommissioningClusterWiFiInterfaceScanResult : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *security;
@property (copy, nonatomic) NSData *ssid;
@property (copy, nonatomic) NSData *bssid;
@property (copy, nonatomic) NSNumber *channel;
@property (copy, nonatomic) NSNumber *wiFiBand;
@property (copy, nonatomic) NSNumber *rssi;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
