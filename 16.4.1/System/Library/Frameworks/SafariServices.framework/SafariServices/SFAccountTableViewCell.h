@class NSString, WBSSavedAccount, UILabel, UIView;
@protocol SFAccountTableViewCellDelegate;

@interface SFAccountTableViewCell : UITableViewCell <SFAccountTableViewCell> {
    UILabel *_monogramLabel;
    UIView *_monogramBackgroundView;
}

@property (readonly, nonatomic) WBSSavedAccount *savedAccount;
@property (readonly, nonatomic) NSString *searchPattern;
@property (readonly, nonatomic) BOOL isIconMonogram;
@property (weak, nonatomic) id<SFAccountTableViewCellDelegate> delegate;
@property (readonly, nonatomic) BOOL safari_hasOneTimeCodeGenerator;
@property (readonly, nonatomic) BOOL safari_hasWebsite;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setIcon:(id)a0;
- (void).cxx_destruct;
- (void)_updateAccessibilityIdentifiers;
- (void)safari_copyOneTimeCode;
- (void)safari_copyPassword;
- (void)safari_copyUserName;
- (void)safari_copyWebsite;
- (void)setSavedAccount:(id)a0 searchPattern:(id)a1 emphasizeUserName:(BOOL)a2;
- (void)setSavedAccount:(id)a0 withWarnings:(id)a1 savedAccountIsOnlySavedAccountForHighLevelDomain:(BOOL)a2;
- (void)showPlaceholderImageForDomain:(id)a0 backgroundColor:(id)a1;

@end
