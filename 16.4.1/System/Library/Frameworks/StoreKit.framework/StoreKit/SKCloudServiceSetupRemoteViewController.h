@class NSString;
@protocol SKCloudServiceSetupRemoteViewControllerDelegate;

@interface SKCloudServiceSetupRemoteViewController : _UIRemoteViewController <SKCloudServiceSetupExtensionClientInterface>

@property (weak, nonatomic) id<SKCloudServiceSetupRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)didFinishLoadingWithSuccess:(BOOL)a0 error:(id)a1;
- (void)dismissCloudServiceSetupViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)dismissSafariViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)overrideCreditCardPresentationWithCompletion:(id /* block */)a0;
- (void)overrideRedeemCameraPerformAction:(long long)a0 withObject:(id)a1;
- (void)presentSafariViewControllerWithURL:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
