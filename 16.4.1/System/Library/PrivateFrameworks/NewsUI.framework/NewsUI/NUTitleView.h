@class NUCrossFadeTitleView, NUFadeViewAnimator, NUSlideViewAnimator, NUAnimationQueue, NSObject;
@protocol NUTitleViewStyler, NUTitleViewDelegate, OS_dispatch_semaphore;

@interface NUTitleView : UIView

@property (retain, nonatomic) NUCrossFadeTitleView *titleView;
@property (retain, nonatomic) NUCrossFadeTitleView *incomingTitleView;
@property (readonly, nonatomic) NUSlideViewAnimator *slideAnimator;
@property (readonly, nonatomic) NUFadeViewAnimator *fadeAnimator;
@property (readonly, nonatomic) NUAnimationQueue *animationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lingerSemaphore;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastLayoutBounds;
@property (retain, nonatomic) id<NUTitleViewStyler> styler;
@property (weak, nonatomic) id<NUTitleViewDelegate> delegate;

- (id)initWithCoder:(id)a0;
- (id)initWithStyler:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyTitleViewUpdate:(id)a0 animation:(unsigned long long)a1;
- (id)createMaskingLayerForTranslation;
- (void)relayoutWithAnimation:(BOOL)a0;
- (void)layoutSubviews;
- (void)finishDisplayingTitleViewUpdate:(id)a0 finished:(id /* block */)a1;
- (void)titleViewHandleTapGuesture;
- (void).cxx_destruct;

@end
