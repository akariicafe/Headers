@class NSString;

@interface WLWiFiNetwork : NSObject

@property (nonatomic) struct __WiFiNetwork { } *ref;
@property (readonly, nonatomic) NSString *ssid;

- (void)dealloc;
- (id)initWithWiFiNetworkRef:(struct __WiFiNetwork { } *)a0;

@end
