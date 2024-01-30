@class CAMViewfinderOpenAndCloseTransition, CAMViewfinderFlipTransition;
@protocol CAMViewfinderTransitionable;

@interface CAMViewfinderTransitionController : NSObject

@property (retain, nonatomic, setter=_setOpenAndCloseTransition:) CAMViewfinderOpenAndCloseTransition *_openAndCloseTransition;
@property (retain, nonatomic, setter=_setFlipTransition:) CAMViewfinderFlipTransition *_flipTransition;
@property (weak, nonatomic) id<CAMViewfinderTransitionable> target;

- (void).cxx_destruct;
- (void)closeAndRotateWithDirection:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)closeWithBlur:(BOOL)a0 animated:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)openForReason:(long long)a0 animated:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)handleApplicationDidEnterBackground;

@end
