@class NSString;

@interface WFUserSuppliedNetwork : NSObject <WFNetworkListRecord>

@property (copy, nonatomic) NSString *ssid;
@property (nonatomic) long long security;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) struct __SecIdentity { } *TLSIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)rssi;
- (unsigned long long)signalBars;
- (BOOL)isSecure;
- (void).cxx_destruct;
- (BOOL)canBeDisplayedAsCurrent;
- (id)subtitle;
- (id)hotspotCellularProtocol;
- (id)hotspotSignalStrength;
- (id)hotspotBatteryLife;
- (float)scaledRSSI;
- (BOOL)isInstantHotspot;
- (BOOL)iOSHotspot;
- (BOOL)isAdhoc;
- (BOOL)isEnterprise;
- (BOOL)isUnconfiguredAccessory;
- (id)title;

@end
