@class NSString, UIViewController, UIBarButtonItem;
@protocol TSSetupFlowItem;

@interface TSOnDeviceConversionFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate> {
    NSString *_phoneNumber;
    NSString *_carrierName;
    UIBarButtonItem *_cancelButton;
    UIViewController<TSSetupFlowItem> *_currentViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)a0;
- (void)viewControllerDidComplete:(id)a0;
- (void)setDefaultNavigationItems:(id)a0;
- (id)initWithPhoneNumber:(id)a0 carrierName:(id)a1;
- (id)nextViewControllerFrom:(id)a0;

@end
