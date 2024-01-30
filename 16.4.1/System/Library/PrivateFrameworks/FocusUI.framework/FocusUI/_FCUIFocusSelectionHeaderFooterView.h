@class NSString, UILabel;

@interface _FCUIFocusSelectionHeaderFooterView : UIView <FCUIContentSizeCategoryAdjusting> {
    UILabel *_label;
}

@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_preferredFont:(BOOL)a0 textStyle:(id)a1 weight:(double)a2 additionalTraits:(unsigned int)a3;

- (void)_updateTextAttributes;
- (void)_setNeedsTextAttributesUpdate;
- (void)_updateTextAttributesIfNecessary;
- (BOOL)_needsTextAttributesUpdate;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_labelFont;
- (id)initWithText:(id)a0;
- (void)layoutSubviews;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (void)_configureLabel:(id)a0;
- (void)_updateTextAttributesForLabel:(id)a0;
- (id)_attributedTextForText:(id)a0;
- (void)_configureLabelIfNecessary;
- (void)_layoutLabel:(id)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 measuringOnly:(out struct CGSize { double x0; double x1; } *)a2;
- (void)_layoutSubviewsInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 measuringOnly:(out struct CGSize { double x0; double x1; } *)a1;

@end
