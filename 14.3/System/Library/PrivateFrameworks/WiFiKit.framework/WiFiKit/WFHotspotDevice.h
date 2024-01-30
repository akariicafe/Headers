@class NSString, SFRemoteHotspotDevice;

@interface WFHotspotDevice : NSObject <WFNetworkListRecord>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SFRemoteHotspotDevice *hotspotDevice;
@property (readonly, nonatomic) NSString *ssid;

- (long long)rssi;
- (unsigned long long)signalBars;
- (void)setScaledRSSI:(float)a0;
- (BOOL)isSecure;
- (id)init;
- (BOOL)isKnown;
- (void).cxx_destruct;
- (BOOL)prominentDisplay;
- (BOOL)canBeDisplayedAsCurrent;
- (long long)securityMode;
- (id)subtitle;
- (BOOL)_isEqualToNetwork:(id)a0;
- (id)hotspotCellularProtocol;
- (id)hotspotSignalStrength;
- (BOOL)isHotspot20;
- (id)hotspotBatteryLife;
- (float)scaledRSSI;
- (BOOL)isInstantHotspot;
- (unsigned long long)uniqueIdentifier;
- (BOOL)iOSHotspot;
- (BOOL)isPopular;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isEqualToHotspotDevice:(id)a0;
- (BOOL)isAdhoc;
- (BOOL)isEnterprise;
- (BOOL)isUnconfiguredAccessory;
- (id)title;
- (BOOL)isEquivalentRecord:(id)a0;
- (id)initWithHotspotDevice:(id)a0;

@end
