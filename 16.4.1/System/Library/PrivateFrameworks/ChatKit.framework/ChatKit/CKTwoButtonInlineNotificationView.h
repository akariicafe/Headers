@class NSString, UIImage, UILabel, UIView, UIButton;

@interface CKTwoButtonInlineNotificationView : CKInlineNotificationView {
    UIView *_contentView;
}

@property (retain, nonatomic) UIButton *failureButton;
@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIView *horizontalDivider;
@property (retain, nonatomic) UIView *verticalDivider;
@property (retain, nonatomic) UIView *leftGrayoutView;
@property (retain, nonatomic) UIView *rightGrayoutView;
@property (nonatomic) BOOL leftButtonIsGrayedOut;
@property (nonatomic) BOOL rightButtonIsGrayedOut;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSString *headerText;
@property (retain, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) NSString *leftButtonText;
@property (retain, nonatomic) NSString *rightButtonText;

- (void)_handleContentSizeCategoryDidChange:(id)a0;
- (id)descriptionText;
- (void)_updateFonts;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDescriptionText:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (id)contentView;
- (void).cxx_destruct;
- (void)setHeaderText:(id)a0;
- (id)rightButtonText;
- (void)_handleTouchDown:(id)a0;
- (void)_handleTouchUpInside:(id)a0;
- (void)_handleTouchUpOutside:(id)a0;
- (double)_heightForBottomBoxWithContainerWidth:(double)a0 startingYOffset:(double)a1 leftButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 rightButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 dividerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 leftGrayoutViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a5 rightGrayoutViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a6;
- (double)_heightForTopBoxWithContainerWidth:(double)a0 failureButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 labelFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 descriptionFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (struct CGSize { double x0; double x1; })contentViewSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)leftButtonIsGrayedOut;
- (id)leftButtonText;
- (BOOL)rightButtonIsGrayedOut;
- (void)setLeftButtonIsGrayedOut:(BOOL)a0;
- (void)setLeftButtonText:(id)a0;
- (void)setRightButtonIsGrayedOut:(BOOL)a0;
- (void)setRightButtonText:(id)a0;

@end
