@class NSString, VOSBluetoothDevice;

@interface AXUIVoiceOverBluetoothPairController : AXUISettingsSetupCapableListController <UITextFieldDelegate> {
    VOSBluetoothDevice *_device;
    NSString *_promptFormat;
    BOOL _dismissed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (void)deviceUpdated:(id)a0;
- (void)doneButtonClicked:(id)a0;
- (void)updatePrompt:(id)a0;
- (id)internalTableView;
- (void)emptySetter:(id)a0 specifier:(id)a1;
- (void)loadView;
- (id)specifiers;
- (void)cancelButtonClicked:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)textDidChange:(id)a0;
- (void)keyboardWillShow:(id)a0;

@end
