@class NSString, UIViewController;
@protocol WFPickerViewProviderDelegate;

@interface WFPickerViewProvider : NSObject <WFNetworkView, WFNetworkViewProvider>

@property (retain, nonatomic) UIViewController *rootViewController;
@property (weak, nonatomic) id<WFPickerViewProviderDelegate> delegate;
@property (readonly, nonatomic) BOOL wantsModalPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootViewController:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canHandleCredentialsContext:(id)a0;
- (id)_promptForEnterpriseJoin:(id)a0;
- (id)certificateViewControllerWithContext:(id)a0;
- (id)credentialsViewControllerWithContext:(id)a0;
- (void)didDismissNetworkViewController:(id)a0 forContext:(id)a1;
- (id)networkDetailsViewControllerWithContext:(id)a0;
- (id)networkErrorViewControllerWithContext:(id)a0;
- (id)otherNetworkViewControllerWithContext:(id)a0;
- (void)presentNetworkViewController:(id)a0 forContext:(id)a1;

@end
