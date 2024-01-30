@class NSString, NSTimer, CKInvisibleInkEffectView, UIView;
@protocol CKInvisibleInkEffectHostView;

@interface CKInvisibleInkEffectController : NSObject <CKInvisibleInkEffectViewDelegate>

@property (retain, nonatomic) CKInvisibleInkEffectView *effectView;
@property (weak, nonatomic) UIView<CKInvisibleInkEffectHostView> *hostView;
@property (nonatomic) BOOL effectViewNeedsReset;
@property (retain, nonatomic) NSTimer *resumeTimer;
@property (retain, nonatomic) UIView *borrowedEffectViewSnapshot;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)hostViewDidLayoutSubviews;
- (id)initWithHostView:(id)a0;
- (void)dealloc;
- (void)returnBorrowedEffectView;
- (id)borrowEffectView;
- (void)suspendForTimeInterval:(double)a0;
- (void)hostViewDidUpdateSnapshot:(id)a0;
- (void)resumeTimerFired:(id)a0;
- (void)_updateBorrowedEffectViewSnapshot;
- (void)invisibleInkEffectViewWasUncovered:(id)a0;
- (void)updateBorrowedEffectViewSnapshot;

@end
