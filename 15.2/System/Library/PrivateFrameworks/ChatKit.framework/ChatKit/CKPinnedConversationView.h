@class CKPinnedConversationActivityView, VNFaceLandmarkRegion2D, NSArray, UIImage, UIView, UIImageView, CKConversation, NSString, NSMutableArray, CKLabel, CAFilter, CKAvatarView;
@protocol CKPinnedConversationViewDelegate;

@interface CKPinnedConversationView : UIView <CNAvatarViewDelegate>

@property (class, readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } avatarViewPadding;

@property (retain, nonatomic) CAFilter *dimmingFilter;
@property (retain, nonatomic) CKAvatarView *avatarView;
@property (retain, nonatomic) CKLabel *titleLabel;
@property (retain, nonatomic) UIImageView *unreadIndicator;
@property (retain, nonatomic) CKPinnedConversationActivityView *activityView;
@property (retain, nonatomic) UIImageView *radiantShadowImageView;
@property (retain, nonatomic) UIImageView *avatarSnapshotImageView;
@property (retain, nonatomic) VNFaceLandmarkRegion2D *avatarMouthRegion;
@property (retain, nonatomic) NSMutableArray *activeActivitySuppressionReasons;
@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (retain, nonatomic) CKConversation *conversation;
@property (copy, nonatomic) NSArray *recentMessagesInPinnedConversations;
@property (nonatomic, getter=isUnreadIndicatorHidden) BOOL unreadIndicatorHidden;
@property (nonatomic) BOOL showsLiveActivity;
@property (readonly, nonatomic, getter=isSuppressingActivity) BOOL suppressingActivity;
@property (nonatomic) BOOL preferShortConversationName;
@property (nonatomic) long long activityItemOriginationDirection;
@property (retain, nonatomic) UIImage *avatarSnapshot;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) BOOL needsUnreadIndicatorLeadingEdgePadding;
@property (nonatomic) BOOL isSelectedWithDarkAppearance;
@property (weak, nonatomic) UIView *activityBoundingParentView;
@property (nonatomic) double activityItemTopInset;
@property (weak, nonatomic) id<CKPinnedConversationViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)_maximumAvatarViewWidthFittingSize:(struct CGSize { double x0; double x1; })a0;
+ (double)_preferredAvatarViewDiameterForLayoutStyle:(long long)a0;
+ (BOOL)_mouthRegionDetectionEnabled;
+ (id)_requiredContactKeys;
+ (id)_cachedMouthRegionForContact:(id)a0;
+ (id)_mouthRegionForContactImageCacheKeyForContact:(id)a0;
+ (void)_updateCachedMouthRegionIfNecessaryForContact:(id)a0 completion:(id /* block */)a1;
+ (id)_mouthRegionForContactImageCache;
+ (id)_mouthRegionDetectionDispatchQueue;
+ (void)_determineMouthRegionForContact:(id)a0 completion:(id /* block */)a1;
+ (struct CGSize { double x0; double x1; })avatarViewSizeFittingSize:(struct CGSize { double x0; double x1; })a0 layoutStyle:(long long)a1;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })titleLabelVerticalPadding;

- (void)layoutSubviews;
- (void)_updateTitleLabelFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reapplyPreviouslyDisplayedActivitySnapshot:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)beginSuppressingActivityWithReason:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)endSuppressingActivityWithReason:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateActivityViewAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_updateTitleLabelColor;
- (void)_updateRadiantShadowAffineTranform;
- (void)_updateRadiantShadowImageView;
- (void)_updateAvatarMouthRegion;
- (BOOL)_activityIsSuppressedForLayoutStyle:(long long)a0;
- (void)_updateUnreadIndicator;
- (void)removeDimmingFilter;
- (struct CGSize { double x0; double x1; })unreadIndicatorSize;
- (void)didUpdateContentForAvatarView:(id)a0;
- (id)_unreadIndicatorColor;
- (struct CGSize { double x0; double x1; })titleLabelSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })unreadIndicatorPreferredPadding;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })unreadIndicatorMinimumPadding;
- (struct CGPoint { double x0; double x1; })_centerPointOfFaceLandmarkRegion:(id)a0 inImageOfSize:(struct CGSize { double x0; double x1; })a1;
- (double)_unreadIndicatorLeadingEdgePadding;
- (void)_updateTitleLabelWithText:(id)a0;
- (id)_unreadIndicatorImage;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (void)didEndDisplaying;
- (void).cxx_destruct;
- (id)init;
- (void)_updateTitleLabel;
- (void)_updateAvatarView;
- (void)prepareForReuse;
- (void)configureAsPrototypeCell;
- (void)setUnreadIndicatorHidden:(BOOL)a0 animated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })avatarViewFrameForSize:(struct CGSize { double x0; double x1; })a0 layoutStyle:(long long)a1;
- (void)dimAvatarView;
- (void)contentSizeCategoryChanged:(id)a0;

@end
