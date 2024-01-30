@class UIColor, NSString;
@protocol VisualCompletionInformable;

@interface MiroCircularProgressBar : UIView <CAAnimationDelegate>

@property (nonatomic) float progress;
@property (retain, nonatomic) UIColor *progressColor;
@property (nonatomic) double circleLineWidth;
@property (nonatomic) double arcLineWidth;
@property (nonatomic) double animationDuration;
@property (weak, nonatomic) id<VisualCompletionInformable> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
