@class WFNetworkScanRecord, NSString, NSArray, WFNetworkProfile, WFDiagnosticsContext, WFKnownNetworkStore, UIViewController, WFIPMonitor;
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
@property (copy, nonatomic) id /* block */ actionHandler;
@property (retain, nonatomic) NSArray *recommendations;
@property BOOL diagnosable;
@property (nonatomic, getter=isCurrent) BOOL current;
@property (nonatomic) BOOL supportsAirportManagement;
@property (copy, nonatomic) NSString *hardwareMACAddress;
@property (copy, nonatomic) NSString *staticPrivateMACFooterText;
@property (copy, nonatomic) NSString *turnONPrivateMACFooterText;
@property (copy, nonatomic) NSString *turnOFFPrivateMACFooterText;
@property (nonatomic) BOOL autoJoinEnabled;
@property (nonatomic) BOOL autoLoginEnabled;
@property (nonatomic) BOOL isInSaveDataMode;
@property (readonly, nonatomic, getter=isRandomMACAddressConfigurable) BOOL randomMACAddressConfigurable;
@property (readonly, nonatomic, getter=isRandomMACFeatureEnabled) BOOL randomMACFeatureEnabled;
@property (readonly, copy, nonatomic) NSString *randomMACAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController<WFNetworkView> *provider;
@property (readonly, nonatomic) BOOL needsDismissal;

- (void)cancel;
- (void)join;
- (void).cxx_destruct;
- (void)dealloc;
- (void)manage;
- (void)forget;
- (void)renewLease;
- (id)initWithNetwork:(id)a0 profile:(id)a1 knownNetworkStore:(id)a2 ipMonitor:(id)a3 privateMACConfig:(id)a4;
- (void)openRecommendationLink;
- (void)enableRandomMAC;
- (void)disableRandomMAC;

@end
