@class UIButton, SFContactAutoFillValue, UILabel;

@interface SFContactAutoFillTableViewCell : UITableViewCell {
    SFContactAutoFillValue *_value;
    UIButton *_checkmarkButton;
    UILabel *_categoryLabel;
    UILabel *_optionLabel;
}

@property (nonatomic) BOOL usesDetailAppearance;
@property (nonatomic) BOOL checked;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)checkmarkButtonTapped:(id)a0;
- (void)setValue:(id)a0 property:(id)a1;

@end
