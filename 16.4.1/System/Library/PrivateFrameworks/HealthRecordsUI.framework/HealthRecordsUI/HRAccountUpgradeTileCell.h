@class NSString;

@interface HRAccountUpgradeTileCell : UITableViewCell {
    void /* unknown type, empty encoding */ profile;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ upgradableAccounts;
    void /* unknown type, empty encoding */ determineUpgradableAccountsCanceller;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tileView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_iconView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bodyLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_separator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dismissButton;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;

@property (nonatomic, readonly) BOOL hasUpgradableAccounts;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)dismissAction;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 presentingViewController:(id)a1;
- (void)upgradeAction;

@end
