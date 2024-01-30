@interface _UIViewControllerTransitionCoordinatorContextDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isAnimated) BOOL animated;
@property (nonatomic, getter=isInteractive) BOOL interactive;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (nonatomic) double transitionDuration;
@property (nonatomic) double percentComplete;
@property (nonatomic) double completionVelocity;
@property (nonatomic) long long completionCurve;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } targetTransform;
@property (nonatomic) long long toOrientation;
@property (nonatomic) long long fromOrientation;

+ (id)descriptionForTransitionCoordinatorContext:(id)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
