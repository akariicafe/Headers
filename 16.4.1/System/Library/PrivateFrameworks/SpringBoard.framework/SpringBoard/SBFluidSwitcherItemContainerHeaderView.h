@class NSArray, NSString, NSMutableDictionary, MTVisualStyling, NSMutableArray, UITapGestureRecognizer;
@protocol SBFluidSwitcherItemContainerHeaderViewDelegate;

@interface SBFluidSwitcherItemContainerHeaderView : UIView <PTSettingsKeyObserver> {
    NSMutableDictionary *_itemsToIconImageViews;
    NSMutableArray *_iconImageViewReusePool;
    NSMutableDictionary *_itemsToTitleLabels;
    NSMutableArray *_titleLabelReusePool;
    NSMutableDictionary *_itemsToSubtitleLabelViews;
    NSMutableArray *_subtitleLabelReusePool;
    NSMutableDictionary *_itemsToMultiWindowIndicatorViews;
    NSMutableArray *_multiWindowIndicatorViewReusePool;
    long long _subtitleVisualStylingInterfaceStyle;
    MTVisualStyling *_subtitleVisualStyling;
    double _spacingBetweenLeadingEdgeAndIcon;
    double _spacingBetweenTrailingEdgeAndLabels;
    double _iconSideLength;
    double _spacingBetweenSnapshotAndIcon;
    double _spacingBetweenSnapshotAndDescriptionLabelBaseline;
    double _spacingBetweenTitleAndSubtitleBaseline;
    double _spacingBetweenIconAndLabel;
    double _spacingBetweenLabelAndMultipleWindowsIndicator;
    double _multipleWindowsIndicatorSideLength;
    double _spacingBetweenLabelAndSecondIcon;
    double _spacingBetweenBoundsCenterAndSecondIcon;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (class, readonly, nonatomic) double distanceFromBoundingLeadingEdgeToIconTrailingEdge;

@property (readonly, weak, nonatomic) id<SBFluidSwitcherItemContainerHeaderViewDelegate> delegate;
@property (readonly, nonatomic) double preferredHeaderHeight;
@property (nonatomic) double textAlpha;
@property (copy, nonatomic) NSArray *titleItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)_handleTapGestureRecognizer:(id)a0;
- (void)_updateVisualStylingWithTitleItems:(id)a0;
- (id)_makeMultipleWindowsIndicatorView;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (id)_subtitleLabelFont;
- (void)_applyPrototypeSettings;
- (id)_multiWindowIndicatorAccessibilityIdentifierForDisplayItem:(id)a0;
- (id)_titleLabelFont;
- (void)_updateTitleAlpha;
- (void)dealloc;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)layoutSubviews;
- (void)setTitleItems:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
