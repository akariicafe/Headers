@class UIColor, NSString, NSURL, UILabel, NSAttributedString, UIButton;

@interface PKTransactionStatusCell : UITableViewCell {
    UILabel *_primaryLabel;
    UILabel *_secondaryTitleLabel;
    UIButton *_secondaryTitleButton;
    id /* block */ _secondaryTitleButtonAction;
    UILabel *_secondaryValueLabel;
    BOOL _templateLayout;
}

@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryTitle;
@property (copy, nonatomic) NSAttributedString *secondaryTitleAttributed;
@property (copy, nonatomic) NSString *secondaryTitleLinkText;
@property (copy, nonatomic) NSURL *secondaryTitleLinkURL;
@property (copy, nonatomic) NSString *secondaryValue;
@property (retain, nonatomic) UIColor *primaryTextOverrideColor;
@property (retain, nonatomic) UIColor *secondaryTextOverrideColor;
@property (nonatomic) BOOL isBridge;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateTextColors;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didPressSecondaryTitleButton:(id)a0;
- (BOOL)hasCompleteSecondaryLink;

@end
