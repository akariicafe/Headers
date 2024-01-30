@class NSString, HFPinCodeManager;

@interface HUGuestsPinCodesViewController : HUItemTableViewController <HUPresentationDelegate, HFPinCodeManagerObserver>

@property (weak, nonatomic) HFPinCodeManager *pinCodeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)hideSpinner;
- (void)showSpinner;
- (id)buildItemModuleControllerForModule:(id)a0;
- (id)finishPresentation:(id)a0 animated:(BOOL)a1;
- (id)initWithPinCodeManager:(id)a0;

@end
