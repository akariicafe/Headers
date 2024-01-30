@class CAMElapsedTimeView, NSString, CAMLivePhotoBadge, CAMFlashBadge, CAMSharedLibraryBadge, NSMutableDictionary, CAMFocusLockBadge, CAMVideoStabilizationBadge;
@protocol CAMBadgeTrayDelegate;

@interface CAMBadgeTray : UIView <CEKBadgeViewDelegate>

@property (readonly, nonatomic) NSMutableDictionary *_badgeMap;
@property (weak, nonatomic) id<CAMBadgeTrayDelegate> delegate;
@property (nonatomic) unsigned long long visibleBadges;
@property (readonly, nonatomic) CAMFlashBadge *flashBadge;
@property (readonly, nonatomic) CAMLivePhotoBadge *livePhotoBadge;
@property (readonly, nonatomic) CAMFocusLockBadge *focusLockBadge;
@property (readonly, nonatomic) CAMElapsedTimeView *elapsedTimeView;
@property (readonly, nonatomic) CAMSharedLibraryBadge *sharedLibraryBadge;
@property (readonly, nonatomic) CAMVideoStabilizationBadge *videoStabilizationBadge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)badgeViewDidChangeIntrinsicContentSize:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_badgeFontStyle;
- (id)_createControlForType:(unsigned long long)a0;
- (void)_forBadgeTypeInBadgeTypes:(unsigned long long)a0 do:(id /* block */)a1;
- (void)_layoutBadges:(unsigned long long)a0 withVisibleBadges:(unsigned long long)a1;
- (void)_loadBadgesIfNeededForTypes:(unsigned long long)a0;
- (void)_updateBadgesVisibilityForVisibleBadges:(unsigned long long)a0;
- (void)setVisibleBadges:(unsigned long long)a0 animated:(BOOL)a1;

@end
