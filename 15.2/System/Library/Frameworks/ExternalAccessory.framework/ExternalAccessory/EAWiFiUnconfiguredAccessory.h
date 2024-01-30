@class NSString;

@interface EAWiFiUnconfiguredAccessory : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSString *ssid;
@property (readonly, copy, nonatomic) NSString *macAddress;
@property (readonly, nonatomic) unsigned long long properties;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAirPortAssistantWACDevice:(id)a0;

@end
