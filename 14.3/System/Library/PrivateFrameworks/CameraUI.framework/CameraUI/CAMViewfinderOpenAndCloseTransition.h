@class CAMSnapshotView;
@protocol CAMViewfinderTransitionable;

@interface CAMViewfinderOpenAndCloseTransition : NSObject

@property (readonly, weak, nonatomic) id<CAMViewfinderTransitionable> _transitionableViewfinder;
@property (retain, nonatomic, setter=_setSnapshotView:) CAMSnapshotView *_snapshotView;
@property (nonatomic) BOOL didEnterBackground;

- (void).cxx_destruct;
- (id)_existingSnapshotViewCreateIfNecessary:(BOOL)a0 removedOnCompletion:(BOOL)a1;
- (void)closeWithoutBlurring;
- (void)openAnimated:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)closeAnimated:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)_closeViewfinder:(BOOL)a0 animated:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (id)initWithTransitionableViewfinder:(id)a0;

@end
