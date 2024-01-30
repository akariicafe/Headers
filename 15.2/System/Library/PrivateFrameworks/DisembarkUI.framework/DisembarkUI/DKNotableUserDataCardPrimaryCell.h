@class UIStackView, UIImageView, UILabel, UIView;

@interface DKNotableUserDataCardPrimaryCell : UIView

@property (retain, nonatomic) UIView *iconView;
@property (retain, nonatomic) UIStackView *labelContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *chevronImageView;
@property (retain, nonatomic) UIView *separatorView;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic) BOOL hideChevron;

- (id)_subtitleFont;
- (id)_titleFont;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)_chevronImage;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 icon:(id)a2;

@end
