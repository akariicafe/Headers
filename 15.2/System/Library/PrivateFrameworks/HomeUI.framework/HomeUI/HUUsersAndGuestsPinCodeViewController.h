@class NSString, HFPinCodeManager;

@interface HUUsersAndGuestsPinCodeViewController : HUItemTableViewController <HUPresentationDelegate, HFPinCodeManagerObserver>

@property (weak, nonatomic) HFPinCodeManager *pinCodeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideSpinner;
- (void).cxx_destruct;
- (void)showSpinner;
- (id)finishPresentation:(id)a0 animated:(BOOL)a1;
- (id)buildItemModuleControllerForModule:(id)a0;
- (id)initWithSourceItem:(id)a0 pinCodeManager:(id)a1 home:(id)a2 forAccessory:(id)a3;

@end
