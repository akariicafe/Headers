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

- (void)deviceUpdated:(id)a0;
- (void)textDidChange:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)cancelButtonClicked:(id)a0;
- (void)dealloc;
- (id)specifiers;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)doneButtonClicked:(id)a0;
- (void)emptySetter:(id)a0 specifier:(id)a1;
- (id)internalTableView;
- (void)updatePrompt:(id)a0;

@end
