@class PSKeychainSyncHeaderView, PSSpecifier;
@protocol KeychainSyncViewControllerDelegate;

@interface PSKeychainSyncViewController : PSListController <KeychainSyncViewController> {
    PSKeychainSyncHeaderView *_headerView;
    PSSpecifier *_groupSpecifier;
}

@property (weak, nonatomic) id<KeychainSyncViewControllerDelegate> delegate;

- (id)specifiers;
- (id)groupSpecifier;
- (void).cxx_destruct;
- (id)headerView;
- (id)viewForHeaderInTableView:(id)a0;
- (double)heightForHeaderInTableView:(id)a0;
- (void)setTitle:(id)a0;

@end
