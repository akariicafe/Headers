@class UIKBUndoStyling, UIImageView, _UISlotView, UILabel, UIView, NSLayoutConstraint;

@interface UIKBUndoControl : UIControl

@property (nonatomic) long long type;
@property (retain, nonatomic) UIKBUndoStyling *style;
@property (retain, nonatomic) UIView *springCoverView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *icon;
@property (weak, nonatomic) _UISlotView *securePasteButtonSlotView;
@property (retain, nonatomic) NSLayoutConstraint *coverConstraintLeftAnchor;
@property (retain, nonatomic) NSLayoutConstraint *coverConstraintRightAnchor;
@property (retain, nonatomic) NSLayoutConstraint *coverConstraintTopAnchor;
@property (retain, nonatomic) NSLayoutConstraint *coverConstraintBottomAnchor;

+ (id)controlLableTextByType:(long long)a0 style:(id)a1 available:(BOOL)a2;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (unsigned int)_secureName;
- (void)configureSecurePasteButtonInRootView:(id)a0;
- (id)controlImageByType:(long long)a0;
- (id)controlLabelImageNameByType:(long long)a0 isRTL:(BOOL)a1;
- (id)initWithType:(long long)a0 andStyling:(id)a1;
- (void)layoutControlForType:(long long)a0 andStyling:(id)a1;
- (void)updateCoverWithTavelProcess:(double)a0 isRTL:(BOOL)a1;
- (void)updateUndoControlStyle;

@end
