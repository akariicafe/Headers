@class NSArray, NSString, NCNotificationInlineFeaturedSectionList, MTVisualStylingProvider, UIView;

@interface NCDigestInlineFeaturedNotificationsContainerView : NCNotificationListBaseContentView <NCDigestFeaturedNotificationsContainerDisplaying> {
    NSArray *_featuredNotificationContentProviders;
    MTVisualStylingProvider *_strokeVisualStylingProvider;
    NCNotificationInlineFeaturedSectionList *_inlineFeaturedSectionList;
    UIView *_dividerView;
}

@property (retain, nonatomic) NSArray *featuredNotificationContentProviders;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (copy, nonatomic) NSString *materialGroupNameBase;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateContent;
- (void)layoutSubviews;
- (void)_visualStylingProviderDidChange:(id)a0 forCategory:(long long)a1 outgoingProvider:(id)a2;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (void)_configureDividerViewIfNecessary;
- (void)_configureInlineFeaturedSectionListIfNecessaryWithDelegate:(id)a0;
- (void)_layoutDividerViewIfNecessary;

@end
