@class WFNetworkScanRecord, NSString, NSArray, WFNetworkProfile, WFDiagnosticsContext, NetworkQualityExecutions, WFKnownNetworkStore, UIViewController, WFIPMonitor;
@protocol WFNetworkView;

@interface WFDetailsContext : NSObject <WFDetailsProviderContext, WFContextPresenting>

@property (retain, nonatomic) WFNetworkProfile *profile;
@property (retain, nonatomic) WFNetworkScanRecord *network;
@property (nonatomic) long long requestedFields;
@property (retain, nonatomic) WFKnownNetworkStore *knownNetworkStore;
@property (nonatomic, getter=isKnownNetwork) BOOL knownNetwork;
@property (retain, nonatomic) WFIPMonitor *ipMonitor;
@property (retain, nonatomic) WFDiagnosticsContext *diagnosticsContext;
@property (nonatomic, getter=isRandomMACAddressDisabled) BOOL randomMACAddressDisabled;
@property (nonatomic, getter=isConnectedWithHardwareAddress) BOOL connectedWithHardwareAddress;
@property (nonatomic, getter=isRandomMACSwitchOn) BOOL randomMACSwitchOn;
@property (nonatomic) struct ct_green_tea_logger_s { } *greenTeaLogger;
@property (retain, nonatomic) NetworkQualityExecutions *networkQualityExecution;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (retain, nonatomic) NSArray *recommendations;
@property BOOL diagnosable;
@property (nonatomic, getter=isCurrent) BOOL current;
@property (nonatomic, getter=isWiFiOutranked) BOOL WiFiOutranked;
@property (nonatomic) BOOL supportsAirportManagement;
@property (copy, nonatomic) NSString *hardwareMACAddress;
@property (copy, nonatomic) NSString *staticPrivateMACFooterText;
@property (copy, nonatomic) NSString *turnONPrivateMACFooterText;
@property (copy, nonatomic) NSString *turnOFFPrivateMACFooterText;
@property (nonatomic, getter=isPrivacyProxyConfigurable) BOOL privacyProxyConfigurable;
@property (nonatomic) long long privacyProxyTierStatus;
@property (nonatomic) BOOL autoJoinEnabled;
@property (nonatomic) BOOL autoLoginEnabled;
@property (nonatomic) BOOL isInSaveDataMode;
@property (nonatomic) BOOL isPrivacyProxyEnabled;
@property (readonly, nonatomic, getter=isRandomMACAddressConfigurable) BOOL randomMACAddressConfigurable;
@property (readonly, nonatomic, getter=isRandomMACFeatureEnabled) BOOL randomMACFeatureEnabled;
@property (readonly, copy, nonatomic) NSString *randomMACAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController<WFNetworkView> *provider;
@property (readonly, nonatomic) BOOL needsDismissal;

- (void)join;
- (void)renewLease;
- (void)manage;
- (void).cxx_destruct;
- (void)dealloc;
- (void)forget;
- (void)cancel;
- (id)initWithNetwork:(id)a0 profile:(id)a1 knownNetworkStore:(id)a2 ipMonitor:(id)a3 privateMACConfig:(id)a4;
- (void)_setNetworkQuality:(double)a0 date:(id)a1;
- (void)openRecommendationLink;
- (void)enableRandomMAC;
- (void)disableRandomMAC;
- (void)runNetworkQualityWithCompletionHandler:(id /* block */)a0;
- (void)cancelNetworkQualityRun;
- (void)overrideWiFiOutrank;

@end
