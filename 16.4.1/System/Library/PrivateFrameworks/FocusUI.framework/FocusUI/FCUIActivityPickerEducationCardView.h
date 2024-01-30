@class UIView, NSString, UITapGestureRecognizer, _FCUIActivityPickerOnboardingDismissControl, NSStringDrawingContext, UIAction, MTMaterialView, UILabel;

@interface FCUIActivityPickerEducationCardView : UIView <FCUIContentSizeCategoryAdjusting> {
    MTMaterialView *_backgroundMaterialView;
    UILabel *_headlineLabel;
    UILabel *_bodyLabel;
    UITapGestureRecognizer *_defaultTapGesture;
    _FCUIActivityPickerOnboardingDismissControl *_dismissControl;
    NSStringDrawingContext *_drawingContext;
    BOOL _textAttributesValid;
}

@property (readonly, nonatomic) UIView *prominentView;
@property (readonly, copy, nonatomic) NSString *headlineText;
@property (readonly, copy, nonatomic) NSString *bodyText;
@property (copy, nonatomic) UIAction *defaultAction;
@property (readonly, copy, nonatomic) UIAction *dismissAction;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultEducationCardViewWithProminentViewBaubleDescriptions:(id)a0 dismissAction:(id)a1;
+ (id)defaultEducationCardViewActivityIdentifiers;
+ (id)_preferredFont:(BOOL)a0 textStyle:(id)a1 weight:(double)a2 additionalTraits:(unsigned int)a3;
+ (id)_defaultPromimentViewWithBaubleDescriptions:(id)a0;
+ (id)defaultEducationCardViewFallbackBaubleDescriptions;

- (void)_updateTextAttributes;
- (void)_setNeedsTextAttributesUpdate;
- (void)_handleDefaultTap:(id)a0;
- (void)_updateTextAttributesIfNecessary;
- (BOOL)_needsTextAttributesUpdate;
- (void)_configureBackgroundMaterialViewIfNecessary;
- (void)_updateTextAttributesForBodyLabel;
- (void)_configureDismissControlIfNecessaryWithAction:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_configureBodyLabelIfNecessary;
- (void)_layoutSubviewInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 measuringOnly:(out struct CGSize { double x0; double x1; } *)a1;
- (void)layoutSubviews;
- (id)initWithProminentView:(id)a0 headlineText:(id)a1 bodyText:(id)a2 dismissAction:(id)a3;
- (void)_updateTextAttributesForHeadlineLabel;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (void)_configureHeadlineLabelIfNecessary;

@end
