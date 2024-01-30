@class NSString, SFRemoteHotspotDevice;

@interface WFHotspotDevice : NSObject <WFNetworkListRecord>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SFRemoteHotspotDevice *hotspotDevice;
@property (readonly, nonatomic) NSString *ssid;

- (BOOL)isKnown;
- (id)title;
- (unsigned long long)uniqueIdentifier;
- (long long)rssi;
- (id)subtitle;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isSecure;
- (unsigned long long)signalBars;
- (long long)securityMode;
- (BOOL)isAdhoc;
- (BOOL)isInstantHotspot;
- (BOOL)isEnterprise;
- (BOOL)_isEqualToHotspotDevice:(id)a0;
- (BOOL)_isEqualToNetwork:(id)a0;
- (BOOL)iOSHotspot;
- (id)initWithHotspotDevice:(id)a0;
- (BOOL)isHotspot20;
- (float)scaledRSSI;
- (BOOL)isUnconfiguredAccessory;
- (BOOL)isEquivalentRecord:(id)a0;
- (void)setScaledRSSI:(float)a0;
- (BOOL)isPopular;
- (BOOL)prominentDisplay;
- (id)hotspotBatteryLife;
- (id)hotspotSignalStrength;
- (id)hotspotCellularProtocol;
- (BOOL)canBeDisplayedAsCurrent;

@end
