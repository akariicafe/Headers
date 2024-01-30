@class NSError, NSString, UIViewController;
@protocol WFNetworkListRecord, WFDiagnosticsResultItem, WFNetworkView;

@interface WFErrorContext : NSObject <WFErrorProviderContext, WFContextPresenting>

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) id<WFNetworkListRecord> network;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) id<WFDiagnosticsResultItem> result;
@property (readonly, nonatomic) long long requestedFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController<WFNetworkView> *provider;
@property (readonly, nonatomic) BOOL needsDismissal;

- (void)cancel;
- (void).cxx_destruct;
- (id)_userInfoForAssociationError:(id)a0 networkName:(id)a1;
- (id)initWithAssociationError:(id)a0 network:(id)a1 diagnosticsResult:(id)a2;

@end
