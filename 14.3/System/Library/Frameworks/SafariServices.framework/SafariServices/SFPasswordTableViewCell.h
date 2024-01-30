@class NSString, UILabel, WBSSavedPassword, UIView;

@interface SFPasswordTableViewCell : UITableViewCell <SFPasswordTableViewCell> {
    UILabel *_monogramLabel;
    UIView *_monogramBackgroundView;
}

@property (readonly, nonatomic) WBSSavedPassword *savedPassword;
@property (readonly, nonatomic) NSString *searchPattern;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)setSavedPassword:(id)a0 withWarnings:(id)a1 savedPasswordIsOnlySavedPasswordForHighLevelDomain:(BOOL)a2;
- (void)setIcon:(id)a0;
- (void)setSavedPassword:(id)a0 searchPattern:(id)a1;
- (void)safari_copyUserName;
- (void)safari_copyPassword;
- (void)showPlaceholderImageForDomain:(id)a0 backgroundColor:(id)a1;

@end
