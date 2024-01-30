@class CAGradientLayer, NSArray, NSString, NSUUID, UIView, NSPointerArray;
@protocol MPUMarqueeViewDelegate;

@interface MPUMarqueeView : UIView <CAAnimationDelegate> {
    NSUUID *_currentAnimationID;
    long long _options;
    NSPointerArray *_coordinatedMarqueeViews;
    MPUMarqueeView *_primaryMarqueeView;
}

@property (readonly, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) double contentGap;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) UIView *contentView;
@property (weak, nonatomic) UIView *animationReferenceView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } fadeEdgeInsets;
@property (weak, nonatomic) id<MPUMarqueeViewDelegate> delegate;
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
- (void)addCoordinatedMarqueeView:(id)a0;
- (void)didMoveToWindow;
- (void)sceneWillEnterForegroundNotification:(id)a0;
- (void)setMarqueeEnabled:(BOOL)a0 withOptions:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_createMarqueeAnimationIfNeeded;
- (id)viewForLastBaselineLayout;
- (void)sceneDidEnterBackgroundNotification:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)viewForFirstBaselineLayout;
- (void)invalidateIntrinsicContentSize;
- (void)_tearDownMarqueeAnimation;
- (void)_createMarqueeAnimationIfNeededWithMaximumDuration:(double)a0 beginTime:(double)a1;
- (void).cxx_destruct;
- (BOOL)_contentFits;
- (void)resetMarqueePosition;

@end
