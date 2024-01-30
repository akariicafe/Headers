@class UIFont, NSString, UIColor, TLKLabel, UIView;

@interface SearchUIMaskedLabelsStackView : NUIContainerStackView <NUIContainerViewDelegate>

@property (retain) UIView *extensionLabelBackgroundView;
@property (retain) UIView *gradientView;
@property double completionStringOffset;
@property (retain) UIView *fillerView;
@property (readonly, nonatomic) TLKLabel *completionLabel;
@property (readonly, nonatomic) TLKLabel *bridgeLabel;
@property (readonly, nonatomic) TLKLabel *extensionLabel;
@property (retain, nonatomic) NSString *typedString;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *completionFillColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)containerViewDidLayoutArrangedSubviews:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerView:(id)a0 layoutFrameForArrangedSubview:(id)a1 withProposedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)resetStringOffset;
- (id)init;
- (void).cxx_destruct;
- (void)layoutMasksAndLabels;

@end
