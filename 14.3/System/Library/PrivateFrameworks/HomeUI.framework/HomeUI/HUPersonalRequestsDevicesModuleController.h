@class NSString, HUPersonalRequestsDevicesItemModule;

@interface HUPersonalRequestsDevicesModuleController : HUItemTableModuleController <HUSwitchCellDelegate, UITextViewDelegate>

@property (readonly, nonatomic) HUPersonalRequestsDevicesItemModule *module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithModule:(id)a0;
- (id)initWithModule:(id)a0 host:(id)a1;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (id)setPersonalRequestsDevices:(id)a0;
- (id)turnOnPersonalRequestsForAllMultiUserCapableDevices;
- (void)_presentConfirmationForEnablingPersonalRequestsForItem:(id)a0 cell:(id)a1 didTurnOn:(BOOL)a2 showLanguageVariant:(BOOL)a3;
- (void)_turnOnPersonalRequestForItem:(id)a0 cell:(id)a1 didTurnOn:(BOOL)a2;
- (BOOL)_isCurrentDeviceCandidateForLocationDevice;
- (id)_promptToChangeLocationDeviceIfNecessary;
- (id)_promptToEnableSiriIfNecessary;
- (void)_presentAlert:(id)a0;
- (id)_promptToChangeLocationDeviceFromCurrentDevice:(id)a0;
- (id)_preflightEnablingPersonalRequests;
- (void)_togglePersonalRequestStateForItem:(id)a0;

@end
