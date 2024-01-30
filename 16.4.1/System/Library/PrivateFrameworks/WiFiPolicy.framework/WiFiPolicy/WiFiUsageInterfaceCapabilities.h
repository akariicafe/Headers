@class NSString;

@interface WiFiUsageInterfaceCapabilities : NSObject

@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) struct _Apple80211 { } *a11Ref;
@property (nonatomic) unsigned long long maxPHYRate;
@property (nonatomic) unsigned long long maxNumberOfSpatialStreams;

- (id)initWithInterfaceName:(id)a0;
- (unsigned long long)currentLinkPHYRate;
- (unsigned long long)maxInterfaceNumberOfSpatialStreams;
- (unsigned long long)maxInterfacePHYRate;
- (void)dealloc;
- (unsigned long long)maxLinkPHYRate;
- (id)description;
- (void).cxx_destruct;

@end
