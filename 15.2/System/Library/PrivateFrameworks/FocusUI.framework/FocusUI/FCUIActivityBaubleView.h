@class NSString, UIImageView, UIFont;

@interface FCUIActivityBaubleView : UIView <FCUIContentSizeCategoryAdjusting, FCUIActivityBaubleLayoutDescribing> {
    UIImageView *_glyphImageView;
    UIFont *_referenceFont;
}

@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double referencePointSize;
@property (readonly, nonatomic) double maximumPointSize;
@property (readonly, nonatomic) double referenceDimension;

- (void)layoutSubviews;
- (BOOL)adjustForContentSizeCategoryChange;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)tintColor;
- (void).cxx_destruct;
- (double)scaledValueForValue:(double)a0;
- (double)_scaledValueForValue:(double)a0;
- (void)setTintColor:(id)a0;
- (void)_setNeedsTextAttributesUpdate;
- (void)_updateTextAttributesIfNecessary;
- (BOOL)_needsTextAttributesUpdate;
- (void)_updateTextAttributes;
- (id)initWithBaubleDescription:(id)a0 shadowAttributes:(struct { float x0; struct CGSize { double x0; double x1; } x1; double x2; })a1;

@end
