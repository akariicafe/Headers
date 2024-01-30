@class NSDate, NSString, NSArray, UIView, BSUIFontProvider, NSStringDrawingContext, MTVisualStylingProvider, NSTimeZone, NCNotificationSummaryContentView, UILabel;
@protocol NCDigestFeaturedNotificationsContainerDisplaying, NCNotificationSummaryContentProviding, BSUIDateLabel;

@interface NCDigestSummaryView : UIView <BSUIDateLabelDelegate, NCDigestSummaryDisplaying, MTVisualStylingRequiring, PLContentSizeCategoryAdjusting, MTMaterialGrouping> {
    UILabel<BSUIDateLabel> *_timeStampLabel;
    UILabel *_headingLabel;
    UILabel *_subheadingLabel;
    UILabel *_countLabel;
    UIView *_countBackgroundView;
    BSUIFontProvider *_fontProvider;
    MTVisualStylingProvider *_strokeVisualStylingProvider;
    UIView<NCDigestFeaturedNotificationsContainerDisplaying> *_featuredNotificationsContainerView;
    NCNotificationSummaryContentView *_communicationsSummaryContentView;
    UIView *_communicationsSummaryDividerView;
    NCNotificationSummaryContentView *_appsSummaryContentView;
    UIView *_appsSummaryDividerView;
    NSStringDrawingContext *_drawingContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) long long dateFormatStyle;
@property (copy, nonatomic) NSString *heading;
@property (copy, nonatomic) NSString *subheading;
@property (nonatomic) unsigned long long count;
@property (nonatomic) BOOL presentFeaturedNotificationsInline;
@property (retain, nonatomic) NSArray *featuredNotificationContentProviders;
@property (retain, nonatomic) id<NCNotificationSummaryContentProviding> communicationsSummaryContentProvider;
@property (retain, nonatomic) id<NCNotificationSummaryContentProviding> appsSummaryContentProvider;
@property (retain, nonatomic) UIView *clearControlView;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (copy, nonatomic) NSString *materialGroupNameBase;

+ (id)_preferredFont:(BOOL)a0 textStyle:(id)a1 weight:(double)a2 additionalTraits:(unsigned int)a3;

- (void)_setFontProvider:(id)a0;
- (void)layoutSubviews;
- (id)_fontProvider;
- (BOOL)adjustForContentSizeCategoryChange;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateContent;
- (void)dateLabelDidChange:(id)a0;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (id)visualStylingProviderForCategory:(long long)a0;
- (void).cxx_destruct;
- (void)_updateVisualStylingOfView:(id)a0 style:(long long)a1 visualStylingProvider:(id)a2 outgoingProvider:(id)a3;
- (void)_updateTextAttributesForDateLabel;
- (void)didMoveToWindow;
- (id)_newDividerView;
- (void)_visualStylingProviderDidChange:(id)a0 forCategory:(long long)a1 outgoingProvider:(id)a2;
- (void)_updateTextAttributes;
- (void)_updateTextAttributesForCountLabel;
- (void)_configureSummaryContentView:(id)a0 withSummaryContentProvider:(id)a1;
- (void)_tearDownTimeStampLabel;
- (void)_updateTextAttributesForHeadingLabel;
- (void)_updateTextAttributesForSubheadingLabel;
- (id)_newSummaryContentViewForSummaryContentProvider:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutBoundsForTitleLabelInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_timeStampLabelFont;
- (unsigned long long)_numberOfLinesForHeadingLabelInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)_numberOfLinesForSubheadingLabelInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureTimeStampLabelIfNecessary;
- (id)_timeStampLabelPreferredFont;
- (void)_configureTimeStampLabel;
- (void)_recycleTimeStampLabel;
- (void)_updateVisualStylingProvidersForViewIfNecessary:(id)a0;

@end
