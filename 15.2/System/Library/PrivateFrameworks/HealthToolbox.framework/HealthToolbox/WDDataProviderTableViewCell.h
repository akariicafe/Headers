@class UILabel, UIButton, NSLayoutConstraint;

@interface WDDataProviderTableViewCell : UITableViewCell {
    UILabel *_inactiveLabel;
    UIButton *_checkmarkButton;
    NSLayoutConstraint *_iconImageWidth;
}

@property (retain, nonatomic) NSLayoutConstraint *checkmarkLeadingConstraint;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } iconSize;
@property (nonatomic, getter=isActive) BOOL active;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setIconImage:(id)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_setupUI;
- (void)setDisplayName:(id)a0;

@end
