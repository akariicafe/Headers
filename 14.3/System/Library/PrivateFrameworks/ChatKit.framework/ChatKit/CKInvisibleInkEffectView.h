@class UIImage, NSString, CKInvisibleInkEffectCoverageTracker;
@protocol CKInvisibleInkEffectViewDelegate;

@interface CKInvisibleInkEffectView : UIView <CKInvisibleInkEffectCoverageTrackerDelegate>

@property (class, readonly, nonatomic) double updateInterval;

@property (retain, nonatomic) CKInvisibleInkEffectCoverageTracker *coverageTracker;
@property (weak, nonatomic) id<CKInvisibleInkEffectViewDelegate> delegate;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (void)reset;
- (void)invisibleInkEffectCoverageTrackerDidUncover:(id)a0;
- (void)moveEmittersForTouchesBegan:(id)a0;
- (void)moveEmittersForTouchesMoved:(id)a0;
- (void)endEmittersForTouchesEnded:(id)a0;
- (void)endEmittersForTouchesCancelled:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
