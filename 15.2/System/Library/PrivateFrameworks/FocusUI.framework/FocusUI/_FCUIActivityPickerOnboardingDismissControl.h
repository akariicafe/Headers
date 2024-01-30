@class NSString, UIImageView, UIFont;

@interface _FCUIActivityPickerOnboardingDismissControl : UIControl <FCUIContentSizeCategoryAdjusting> {
    UIImageView *_imageView;
    UIFont *_referenceFont;
}

@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (BOOL)adjustForContentSizeCategoryChange;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithAction:(id)a0;
- (void).cxx_destruct;
- (double)_scaledValueForValue:(double)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_setNeedsTextAttributesUpdate;
- (void)_updateTextAttributesIfNecessary;
- (BOOL)_needsTextAttributesUpdate;
- (void)_updateTextAttributes;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageViewFrameWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
