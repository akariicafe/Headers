@class NSArray, WFNetworkScanRecord, NSString, WFNetworkProfile, UIViewController;
@protocol WFNetworkView;

@interface WFCertificateContext : NSObject <WFCertificateProviderContext, WFContextPresenting>

@property (retain, nonatomic) NSArray *certificateChain;
@property (nonatomic) struct __SecTrust { } *certificateTrust;
@property (retain, nonatomic) WFNetworkProfile *profile;
@property (retain, nonatomic) WFNetworkScanRecord *network;
@property (nonatomic) long long requestedFields;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController<WFNetworkView> *provider;
@property (readonly, nonatomic) BOOL needsDismissal;

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)accept;
- (void)launchSettings;
- (id)initWithNetwork:(id)a0 profile:(id)a1 certificateChain:(id)a2;

@end
