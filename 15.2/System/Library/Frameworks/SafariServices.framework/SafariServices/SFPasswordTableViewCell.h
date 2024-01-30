@class NSString, UILabel, WBSSavedPassword, UIView;
@protocol SFPasswordTableViewCellDelegate;

@interface SFPasswordTableViewCell : UITableViewCell <SFPasswordTableViewCell> {
    UILabel *_monogramLabel;
    UIView *_monogramBackgroundView;
}

@property (readonly, nonatomic) WBSSavedPassword *savedPassword;
@property (readonly, nonatomic) NSString *searchPattern;
@property (readonly, nonatomic) BOOL isIconMonogram;
@property (weak, nonatomic) id<SFPasswordTableViewCellDelegate> delegate;
@property (readonly, nonatomic) BOOL safari_hasOneTimeCodeGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)setIcon:(id)a0;
- (void)safari_copyUserName;
- (void)safari_copyPassword;
- (void)showPlaceholderImageForDomain:(id)a0 backgroundColor:(id)a1;
- (void)safari_copyOneTimeCode;
- (void)setSavedPassword:(id)a0 searchPattern:(id)a1 emphasizeUserName:(BOOL)a2;
- (void)_updateAccessibilityIdentifiers;
- (void)setSavedPassword:(id)a0 withWarnings:(id)a1 savedPasswordIsOnlySavedPasswordForHighLevelDomain:(BOOL)a2;

@end
