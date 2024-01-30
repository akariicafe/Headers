@class UIView, NSString, NSArray, NSHashTable, NSStringDrawingContext, UIImageView, NSMutableDictionary, UIAction, UILabel;

@interface FCUIActivityControlMenuItemView : UIView <UIPointerInteractionDelegate, FCUIMenuElement, FCUIContentSizeCategoryAdjusting, MTVisualStylingRequiring> {
    UIView *_backgroundView;
    UILabel *_activationDescriptionLabel;
    UILabel *_activationDetailsLabel;
    UILabel *_alternativeDescriptionLabel;
    NSHashTable *_viewsRequiringUpdate;
    UIView *_highlightView;
    UIView *_separatorView;
    UIImageView *_accessoryImageView;
    NSMutableDictionary *_categoriesToVisualStylingProviders;
    NSStringDrawingContext *_drawingContext;
}

@property (copy, nonatomic) UIAction *defaultAction;
@property (copy, nonatomic) NSString *alternativeDescription;
@property (nonatomic, getter=isSeparatorVisible) BOOL separatorVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isMenuElement) BOOL menuElement;
@property (readonly, copy, nonatomic) NSString *representedObjectIdentifier;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

+ (id)_preferredFont:(BOOL)a0 textStyle:(id)a1 weight:(double)a2 additionalTraits:(unsigned int)a3;

- (void)layoutSubviews;
- (id)_newLabel;
- (double)_separatorHeight;
- (void)_configureBackgroundViewIfNecessary;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void).cxx_destruct;
- (void)_updateVisualStylingOfView:(id)a0 style:(long long)a1 visualStylingProvider:(id)a2 outgoingProvider:(id)a3;
- (id)_accessoryImage;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)_setAccessoryImage:(id)a0;
- (id)_checkmarkImage;
- (void)performAction;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_setNeedsTextAttributesUpdate;
- (void)_updateTextAttributesIfNecessary;
- (BOOL)_needsTextAttributesUpdate;
- (void)_updateTextAttributes;
- (void)_setActivationDescription:(id)a0;
- (void)_setActivationDetails:(id)a0;
- (void)_configureAlternativeDescriptionLabelIfNecessary;
- (void)_addViewRequiringUpdate:(id)a0;
- (void)_configureSeparatorViewIfNecessary;
- (void)_tearDownSeparatorViewIfNecessary;
- (id)_activationDescription;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessoryImageFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_textFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 accessoryImageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_didPerformUpdate;
- (void)_configureHighlightViewIfNecessary;
- (void)_configureCheckmarkImageViewIfNecessary;
- (void)_tearDownCheckmarkImageViewIfNecessary;
- (void)_visualStylingProvider:(id)a0 didChangeForCategory:(long long)a1 outgoingProvider:(id)a2;
- (void)_configureActivationDescriptionLabelIfNecessary;
- (id)_activationDetails;
- (void)_configureActivationDetailsLabelIfNecessary;
- (void)_configureAccessoryImageViewIfNecessary;
- (void)_updateTextAttributesForActivationDescriptionLabel;
- (void)_updateTextAttributesForActivationDetailsLabel;
- (void)_updateTextAttributesForAlternativeDescriptionLabel;
- (BOOL)_isCheckmarkEnabled;
- (void)_tearDownAccessoryImageViewIfNecessary;

@end
