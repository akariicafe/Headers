@class NSArray, NSString, NSUUID, UIView, NSPointerArray;
@protocol MTMPUMarqueeViewDelegate;

@interface MTMPUMarqueeView : UIView <CAAnimationDelegate> {
    NSUUID *_currentAnimationID;
    long long _options;
    NSPointerArray *_coordinatedMarqueeViews;
    MTMPUMarqueeView *_primaryMarqueeView;
}

@property (nonatomic) double contentGap;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) UIView *contentView;
@property (weak, nonatomic) UIView *animationReferenceView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } fadeEdgeInsets;
@property (nonatomic) BOOL fadeOnlyWhenAnimating;
@property (weak, nonatomic) id<MTMPUMarqueeViewDelegate> delegate;
@property (nonatomic) double marqueeDelay;
@property (nonatomic) double marqueeScrollRate;
@property (nonatomic, getter=isMarqueeEnabled) BOOL marqueeEnabled;
@property (readonly, nonatomic) NSArray *coordinatedMarqueeViews;
@property (retain, nonatomic) UIView *viewForContentSize;
@property (nonatomic) long long animationDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (double)_duration;
- (void)_applyMarqueeFade;
- (void)animationDidStart:(id)a0;
- (void)addCoordinatedMarqueeView:(id)a0;
- (void)didMoveToWindow;
- (void)setMarqueeEnabled:(BOOL)a0 withOptions:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_createMarqueeAnimationIfNeeded;
- (id)viewForLastBaselineLayout;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)viewForFirstBaselineLayout;
- (void)invalidateIntrinsicContentSize;
- (void)_tearDownMarqueeAnimation;
- (void)_createMarqueeAnimationIfNeededWithMaximumDuration:(double)a0 beginTime:(double)a1;
- (void).cxx_destruct;
- (void)resetMarqueePosition;
- (void)_applyMarqueeFadeIfNeeded;
- (void)_removeMarqueeFade;

@end
