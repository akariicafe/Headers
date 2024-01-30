@class NSString, BTSDevice;

@interface BTDeviceNameEditingController : PSListController <UITextFieldDelegate> {
    BTSDevice *_currentDevice;
    NSString *_deviceName;
    NSString *_productName;
}

@property (nonatomic) BOOL keyboardShownOnce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)textDidChange:(id)a0;
- (id)init;
- (void)suspend;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)keyboardWillShow:(id)a0;
- (BOOL)shouldSelectResponderOnAppearance;
- (void)saveEditedName:(id)a0 specifier:(id)a1;
- (id)getDeviceName:(id)a0;

@end
