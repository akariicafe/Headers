@class NSString;

@interface GEOWifiClientWrapper : NSObject

@property (class, readonly, nonatomic) BOOL hasWifiInterface;
@property (class, readonly, nonatomic) BOOL wifiPowerOn;
@property (class, readonly, nonatomic) BOOL locationServicesCapable;
@property (class, readonly, nonatomic) NSString *wifiInterfaceName;

@end
