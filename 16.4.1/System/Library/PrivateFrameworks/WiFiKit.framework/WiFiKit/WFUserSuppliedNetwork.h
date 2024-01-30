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

- (float)scaledRSSI;
- (id)hotspotBatteryLife;
- (BOOL)canBeDisplayedAsCurrent;
- (id)hotspotCellularProtocol;
- (id)hotspotSignalStrength;
- (BOOL)iOSHotspot;
- (unsigned long long)signalBars;
- (BOOL)isAdhoc;
- (BOOL)isSecure;
- (BOOL)isInstantHotspot;
- (BOOL)isEnterprise;
- (BOOL)isUnconfiguredAccessory;
- (id)subtitle;
- (long long)rssi;
- (id)title;
- (void).cxx_destruct;

@end
