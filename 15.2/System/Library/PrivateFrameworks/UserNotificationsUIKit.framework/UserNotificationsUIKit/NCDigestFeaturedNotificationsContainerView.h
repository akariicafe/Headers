@class NSArray, NSString, UIView, NSMutableArray, MTVisualStylingProvider;

@interface NCDigestFeaturedNotificationsContainerView : UIView <NCDigestFeaturedNotificationsContainerDisplaying> {
    NSArray *_featuredNotificationContentProviders;
    NSMutableArray *_notificationViews;
    NSMutableArray *_notificationViewTapButtons;
    UIView *_dividerView;
    BOOL _isDisplayingFeaturedNotificationViewsWithAttachments;
    MTVisualStylingProvider *_strokeVisualStylingProvider;
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

- (void)layoutSubviews;
- (BOOL)adjustForContentSizeCategoryChange;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateContent;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (id)visualStylingProviderForCategory:(long long)a0;
- (void).cxx_destruct;
- (void)_updateVisualStylingOfView:(id)a0 style:(long long)a1 visualStylingProvider:(id)a2 outgoingProvider:(id)a3;
- (void)_buttonTapped:(id)a0;
- (void)_configureDividerViewIfNecessary;
- (void)_visualStylingProviderDidChange:(id)a0 forCategory:(long long)a1 outgoingProvider:(id)a2;
- (BOOL)_shouldPresentFeaturedNotificationViewsWithAttachmentsForContentProviders:(id)a0;
- (id)_newFeaturedNotificationViewForContentProvider:(id)a0;
- (id)_newNotificationSeamlessContentViewForContentProvider:(id)a0;
- (id)_newTapButton;
- (void)_configureNotificationContentView:(id)a0 withContentProvider:(id)a1;
- (BOOL)_isLayoutHorizontalForFeaturedNotificationViews;
- (void)_layoutNotificationContentViewsHorizontally;
- (void)_layoutNotificationContentViewsVertically;
- (void)_highlightView:(id)a0;
- (void)_unhighlightView:(id)a0;
- (id)_contentProviderForTapButton:(id)a0;
- (id)_notificationViewForTapButton:(id)a0;
- (void)_updateViewHighlightingForView:(id)a0 isHighlighted:(BOOL)a1 animated:(BOOL)a2;

@end
