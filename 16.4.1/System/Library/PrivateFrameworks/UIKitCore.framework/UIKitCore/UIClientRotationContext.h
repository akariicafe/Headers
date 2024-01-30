@class UISnapshotView, UIWindow, UIView;

@interface UIClientRotationContext : NSObject {
    UIView *_headerView;
    UIView *_footerView;
    UIView *_snapshotTargetView;
    UIView *_rotatingSnapshotView;
    UIView *_footerStartSnapshotView;
    UIView *_footerEndSnapshotView;
    BOOL _headerWasHidden;
    BOOL _footerWasHidden;
    BOOL _contentWasHidden;
    BOOL _snapshotTargetWasHidden;
    BOOL _orderKeyboardInAfterRotating;
    UISnapshotView *_headerSnapshotViewStart;
    UISnapshotView *_footerSnapshotViewStart;
    UISnapshotView *_contentSnapshotViewStart;
    struct { BOOL animateContentRotation; BOOL preserveHeight; BOOL avoidFadingBottomOfContent; BOOL skipSnapshotOfEndState; BOOL preventAdditveAnimations; double contentStretchRightEdgeInset; int edgeClip; } _rotationSettings;
    double contentBottomInset;
    UIWindow *_window;
}

@property (readonly, nonatomic) id rotatingClient;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) double duration;
@property (nonatomic) BOOL skipClientRotationCallbacks;
@property (readonly, nonatomic) long long fromOrientation;
@property (readonly, nonatomic) long long toOrientation;

- (void)dealloc;
- (void)rotateSnapshots;
- (BOOL)_isFooterTranslucent;
- (BOOL)_isHeaderTranslucent;
- (void)_positionHeaderView:(id)a0 andFooterView:(id)a1 outsideContentViewForInterfaceOrientation:(long long)a2;
- (void)_slideHeaderView:(id)a0 andFooterView:(id)a1 offScreen:(BOOL)a2 forInterfaceOrientation:(long long)a3;
- (void)finishFirstHalfRotation;
- (void)finishFullRotateUsingOnePartAnimation:(BOOL)a0;
- (id)initWithClient:(id)a0 toOrientation:(long long)a1 duration:(double)a2 andWindow:(id)a3;
- (void)setupRotationOrderingKeyboardInAfterRotation:(BOOL)a0;
- (void)slideHeaderViewAndFooterViewOffScreen:(BOOL)a0 forInterfaceOrientation:(long long)a1;

@end
