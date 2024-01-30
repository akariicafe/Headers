@class NSString, SBHIconEditingSettings, SBIconView, UIView;

@interface SBIconListViewIconSizeChangeAnimator : SBIconListViewClusterAnimator <SBIconListLayoutAnimating>

@property (readonly, nonatomic) SBHIconEditingSettings *iconEditingSettings;
@property (retain, nonatomic) UIView *snapshotContainerView;
@property (readonly, nonatomic) SBIconView *iconView;
@property (readonly, nonatomic) UIView *priorIconImageSnapshotView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
