@class BSUIEmojiLabelView, NSArray, NSString, SBFluidSwitcherItemContainerHeaderItem, SBFluidSwitcherIconImageContainerView, UILabel, MTVisualStyling;

@interface SBFluidSwitcherItemContainerHeaderView : UIView <PTSettingsKeyObserver> {
    SBFluidSwitcherItemContainerHeaderItem *_firstItem;
    SBFluidSwitcherIconImageContainerView *_firstIconImageView;
    UILabel *_firstTitleLabel;
    BSUIEmojiLabelView *_firstSubtitleLabelView;
    SBFluidSwitcherItemContainerHeaderItem *_secondItem;
    SBFluidSwitcherIconImageContainerView *_secondIconImageView;
    UILabel *_secondTitleLabel;
    BSUIEmojiLabelView *_secondSubtitleLabelView;
    long long _subtitleVisualStylingInterfaceStyle;
    MTVisualStyling *_subtitleVisualStyling;
    double _spacingBetweenLeadingEdgeAndIcon;
    double _spacingBetweenTrailingEdgeAndLabels;
    double _iconSideLength;
    double _spacingBetweenSnapshotAndIcon;
    double _spacingBetweenSnapshotAndDescriptionLabelBaseline;
    double _spacingBetweenTitleAndSubtitleBaseline;
    double _spacingBetweenIconAndLabel;
    double _spacingBetweenLabelAndSecondIcon;
    double _spacingBetweenBoundsCenterAndSecondIcon;
}

@property (class, readonly, nonatomic) double distanceFromBoundingLeadingEdgeToIconTrailingEdge;

@property (readonly, nonatomic) double preferredHeaderHeight;
@property (nonatomic) double textAlpha;
@property (copy, nonatomic) NSArray *headerItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_titleLabelFont;
- (void)dealloc;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (void)_updateTitleAlpha;
- (void)_updateVisualStylingWithHeaderItems:(id)a0;
- (void)layoutSubviews;
- (id)_subtitleLabelFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_applyPrototypeSettings;
- (void)setHeaderItems:(id)a0 animated:(BOOL)a1;
- (void)settings:(id)a0 changedValueForKey:(id)a1;

@end
