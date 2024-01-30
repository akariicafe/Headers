@class UIStackView, NSArray, UIColor, UIFont, UILabel;
@protocol HFStringGenerator;

@interface HUTitleDescriptionContentView : UIView

@property (readonly, nonatomic) UILabel *descriptionLabel;
@property (readonly, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSArray *verticalLabelConstraints;
@property (retain, nonatomic) NSArray *horizontalLabelConstraints;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) id<HFStringGenerator> titleText;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) id<HFStringGenerator> descriptionText;
@property (retain, nonatomic) UIColor *descriptionTextColor;
@property (retain, nonatomic) UIFont *descriptionFont;
@property (nonatomic, getter=isDisabled) BOOL disabled;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setupStackView;
- (void)_setupTitleLabel;
- (void)_setupDescriptionLabel;
- (void)_updateLabel:(id)a0 withContent:(id)a1;

@end
