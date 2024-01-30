@class NSString, NSArray, NSMutableDictionary, UIAction, UISelectionFeedbackGenerator, _FCUIActivityControlMenuFooterView, NSMutableArray, UIGestureRecognizer;

@interface FCUIActivityControlMenuView : UIView <UIGestureRecognizerDelegate, FCUIContentSizeCategoryAdjusting, MTVisualStylingRequiring> {
    NSArray *_menuItemViews;
    NSMutableArray *_outgoingMenuItemViews;
    NSArray *_purgeableMenuItemViews;
    _FCUIActivityControlMenuFooterView *_footerView;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    NSMutableDictionary *_categoriesToVisualStylingProviders;
}

@property (copy, nonatomic) NSArray *menuItemActions;
@property (readonly, copy, nonatomic) NSArray *menuItemElements;
@property (copy, nonatomic) NSString *menuAlternativeDescription;
@property (copy, nonatomic) UIAction *footerAction;
@property (readonly, nonatomic) UIGestureRecognizer *pressGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

- (void)_handlePressGesture:(id)a0;
- (void)_configureFooterViewIfNecessary;
- (void)_visualStylingProvider:(id)a0 didChangeForCategory:(long long)a1 outgoingProvider:(id)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateVisualStylingOfView:(id)a0 style:(long long)a1 visualStylingProvider:(id)a2 outgoingProvider:(id)a3;
- (double)_continuousCornerRadius;
- (BOOL)_toggleHighlightForMenuElement:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_newMenuItemView;
- (void)layoutSubviews;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)_setContinuousCornerRadius:(double)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;

@end
