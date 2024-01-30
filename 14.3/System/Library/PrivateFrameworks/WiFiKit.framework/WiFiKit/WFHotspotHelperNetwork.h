@class NSString;

@interface WFHotspotHelperNetwork : NSObject

@property (copy, nonatomic) NSString *ssid;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSSID:(id)a0 bundleIdentifier:(id)a1 password:(id)a2 label:(id)a3;

@end
