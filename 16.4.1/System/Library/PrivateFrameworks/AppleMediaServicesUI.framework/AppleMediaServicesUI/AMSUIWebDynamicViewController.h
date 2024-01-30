@class NSString, AMSUIWebClientContext;

@interface AMSUIWebDynamicViewController : AMSUIDynamicViewController <AMSUIWebPagePresenter, AMSUIDynamicViewControllerDelegate>

@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dynamicViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 URL:(id)a1;
- (void)dynamicViewController:(id)a0 didFinishWithPurchaseResult:(id)a1 error:(id)a2;
- (void)willPresentPageModel:(id)a0 appearance:(id)a1;

@end
