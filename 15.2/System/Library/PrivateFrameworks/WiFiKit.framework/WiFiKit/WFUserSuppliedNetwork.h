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

- (id)title;
- (long long)rssi;
- (id)subtitle;
- (void).cxx_destruct;
- (BOOL)isSecure;
- (unsigned long long)signalBars;
- (BOOL)isAdhoc;
- (BOOL)isInstantHotspot;
- (BOOL)isEnterprise;
- (BOOL)iOSHotspot;
- (float)scaledRSSI;
- (BOOL)isUnconfiguredAccessory;
- (id)hotspotBatteryLife;
- (id)hotspotSignalStrength;
- (id)hotspotCellularProtocol;
- (BOOL)canBeDisplayedAsCurrent;

@end
