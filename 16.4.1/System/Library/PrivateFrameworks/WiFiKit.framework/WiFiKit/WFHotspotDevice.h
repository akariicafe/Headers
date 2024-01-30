@class NSString, SFRemoteHotspotDevice;

@interface WFHotspotDevice : NSObject <WFNetworkListRecord>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SFRemoteHotspotDevice *hotspotDevice;
@property (readonly, nonatomic) NSString *ssid;

- (long long)securityMode;
- (float)scaledRSSI;
- (id)lastJoinedDate;
- (BOOL)shouldShowInMyNetworkList;
- (id)hotspotBatteryLife;
- (BOOL)canBeDisplayedAsCurrent;
- (BOOL)_isEqualToNetwork:(id)a0;
- (id)hotspotCellularProtocol;
- (BOOL)isKnown;
- (id)hotspotSignalStrength;
- (BOOL)iOSHotspot;
- (BOOL)shouldShowInKnownNetworkList;
- (BOOL)isEquivalentRecord:(id)a0;
- (BOOL)prominentDisplay;
- (BOOL)isHotspot20;
- (unsigned long long)signalBars;
- (BOOL)isAdhoc;
- (BOOL)isPopular;
- (BOOL)_isEqualToHotspotDevice:(id)a0;
- (BOOL)isSecure;
- (BOOL)isInstantHotspot;
- (BOOL)isEnterprise;
- (void)setScaledRSSI:(float)a0;
- (BOOL)isUnconfiguredAccessory;
- (id)subtitle;
- (BOOL)isEqual:(id)a0;
- (long long)rssi;
- (id)init;
- (id)title;
- (void).cxx_destruct;
- (unsigned long long)uniqueIdentifier;
- (id)initWithHotspotDevice:(id)a0;

@end
