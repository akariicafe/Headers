@class NSString, UIFont;

@interface KeychainSyncAdvancedSecurityCodeController : PSKeychainSyncViewController <UIAlertViewDelegate> {
    double _cellTextWidth;
    UIFont *_cellFont;
}

@property (nonatomic) BOOL showsDisableRecoveryOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)_finishedWithSpecifier:(id)a0;
- (void)nextPressed;
- (void)viewDidLoad;

@end
