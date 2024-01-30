@class UIColor, NSArray, UIImageView, NSString, UILabel, NSLayoutConstraint;

@interface EKEventDetailsHighlightControl : UIControl {
    NSArray *_titleAndSubtitleVisibleContraints;
    NSArray *_justTitleVisibleContraints;
    NSArray *_justSubtitleVisibleContraints;
    NSArray *_justTitleAndActionVisibleContraints;
    NSString *_actionText;
    NSString *_subtitleText;
    UIColor *_actionColor;
}

@property (readonly, retain, nonatomic) NSLayoutConstraint *topMarginConstraint;
@property (readonly, retain, nonatomic) NSLayoutConstraint *interLabelPaddingConstraint;
@property (readonly, retain, nonatomic) NSLayoutConstraint *bottomMarginConstraint;
@property (readonly, nonatomic) UIImageView *iconStack;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) UILabel *actionLabel;

+ (id)subtitleFont;
+ (id)titleFont;
+ (BOOL)requiresConstraintBasedLayout;
+ (id)subtitleColor;
+ (double)topMarginConstant;
+ (double)interLabelBaselineDeltaConstant;
+ (double)bottomMarginConstant;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setIconImage:(id)a0;
- (void)setTitleText:(id)a0;
- (void).cxx_destruct;
- (void)setSubtitleText:(id)a0;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (void)dealloc;
- (void)setActionText:(id)a0 color:(id)a1;
- (void)_updateTitleAndSubtitleConstraints;
- (void)_updateSubtitleAndActionText;
- (void)setSubtitleAttributedText:(id)a0;

@end
