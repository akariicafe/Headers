@class NSDictionary, NSString, NSDate;

@interface HFAccessoryNetworkInfoItem : HFAccessoryInfoItem

@property (nonatomic) unsigned long long networkInfoType;
@property (retain, nonatomic) NSDate *debounceDate;
@property (nonatomic) long long fakeNetworkStrength;
@property (retain, nonatomic) NSDictionary *wifiInfo;
@property (retain, nonatomic) NSString *forceCurrentDeviceNetworkSSID;
@property (readonly, nonatomic) BOOL supportsWiFiStrengthDisplay;

- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0;
- (unsigned long long)infoType;
- (id)_subclass_updateWithOptions:(id)a0;
- (long long)_getWiFiStrength:(id)a0 forFastUpdate:(BOOL)a1;
- (BOOL)_hiddenForType:(unsigned long long)a0;
- (id)_accessoryNetworkSSID;
- (id)_currentDeviceNetworkSSID;
- (id)_extractWiFiInfo:(id)a0;
- (id)_getSignalStrengthIcon:(id)a0 forFastUpdate:(BOOL)a1;
- (id)_localizedDescriptionForType:(unsigned long long)a0;
- (id)_localizedTitleForType:(unsigned long long)a0;
- (unsigned long long)_nextNetworkInfoType;
- (BOOL)_showSignalStrength:(unsigned long long)a0;
- (void)_updateHomePodWiFiInfo;
- (void)toggleNetworkInfoType;

@end
