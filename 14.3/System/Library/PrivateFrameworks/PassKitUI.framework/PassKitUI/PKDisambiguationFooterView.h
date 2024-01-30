@class UILabel, UIButton;

@interface PKDisambiguationFooterView : UIView {
    UILabel *_descriptionLabel;
    UIButton *_actionButton;
    UIButton *_secondaryActionButton;
}

@property (readonly, retain, nonatomic) UILabel *descriptionLabel;
@property (readonly, retain, nonatomic) UIButton *actionButton;
@property (readonly, retain, nonatomic) UIButton *secondaryActionButton;
@property (nonatomic) double topPadding;
@property (nonatomic) double secondaryActionTopPadding;
@property (nonatomic) double bottomPadding;

- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)sizeToFitForTableView:(id)a0;
- (double)_recommendedSecondaryActionTopPaddingForTableView:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
