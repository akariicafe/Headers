@class NSDictionary, NSString;
@protocol AMSBagProtocol, AMSUIMessageGroupDelegate;

@interface AMSUIMessageGroup : IAMMessageGroup <AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate>

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSDictionary *clientData;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *clientVersion;
@property (weak, nonatomic) id<AMSUIMessageGroupDelegate> delegate;
@property (retain, nonatomic) NSDictionary *clientMetricsOverlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_viewControllerForServiceType:(id)a0 placement:(id)a1 clientIdentifier:(id)a2 clientVersion:(id)a3 params:(id)a4 account:(id)a5 sidepack:(id)a6 metrics:(id)a7;
- (id)initWithBag:(id)a0;
- (id)_dictionaryForParamObject:(id)a0 error:(id *)a1;
- (void)viewControllerForModalMessagePresentation:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dynamicViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (id)_viewControllerForURL:(id)a0 account:(id)a1 sidepack:(id)a2 metrics:(id)a3;
- (void)dynamicViewController:(id)a0 didFinishCarrierLinkingWithResult:(id)a1 error:(id)a2;
- (void)webViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;

@end
