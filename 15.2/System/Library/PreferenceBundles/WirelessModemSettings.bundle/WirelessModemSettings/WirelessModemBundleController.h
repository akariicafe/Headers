@class UIAlertController, NSString, NSMutableArray;

@interface WirelessModemBundleController : PSBundleController {
    UIAlertController *_tetheringAlert;
    NSString *_tetheringPhoneNumber;
    NSString *_tetheringURL;
    NSString *_carrierName;
    NSMutableArray *_specifiers;
    BOOL _wifiTetheringSupported;
}

- (id)initWithParentListController:(id)a0;
- (id)specifiersWithSpecifier:(id)a0;
- (void)MISStateChangedNotification:(id)a0;
- (id)_specifiersWithSpecifierMain:(id)a0;
- (void)showSetupAlert:(id)a0;
- (id)getTetheringStatus:(id)a0;
- (void)updateSpecifiersForState:(int)a0 andReason:(int)a1 andButton:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
