@class UIButton, HKClinicalAccount;

@interface WDClinicalAccountSourceCell : WDClinicalLocationCell

@property (retain, nonatomic) UIButton *webLinkButton;
@property (readonly, copy, nonatomic) HKClinicalAccount *account;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_handleWebLinkTapped;
- (void)willDisplay;
- (void)setAccount:(id)a0 dataProvider:(id)a1;
- (void)_setupSubviews;
- (void)_updateForContentSizeCategory:(id)a0;

@end
