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
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void)setIconImage:(id)a0;
- (void)layoutSubviews;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)setDisplayName:(id)a0;
- (void).cxx_destruct;
- (void)_setupUI;

@end
