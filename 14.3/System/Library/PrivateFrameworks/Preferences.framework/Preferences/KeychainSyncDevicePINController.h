@class NSString, UIKeyboard, DevicePINController;

@interface KeychainSyncDevicePINController : PSKeychainSyncTextEntryController {
    DevicePINController *_devicePINController;
    BOOL _showingBlockedMessage;
}

@property (retain, nonatomic) UIKeyboard *disabledKeyboard;
@property (retain, nonatomic) NSString *enterPasscodeTitle;
@property (retain, nonatomic) NSString *enterPasscodeReason;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didFinishEnteringText:(id)a0;
- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 titleAlignmentForFooterInSection:(long long)a1;
- (void)updateBlockedState:(id)a0;

@end
