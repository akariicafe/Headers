@interface CCUIOverlayTransitionState : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly, nonatomic) double presentationProgress;
@property (readonly, nonatomic) double clampedPresentationProgress;
@property (readonly, nonatomic) double nonZeroPresentationProgress;
@property (readonly, nonatomic) double snappedPresentationProgress;

+ (BOOL)isSignificantTransitionFrom:(id)a0 to:(id)a1;
+ (id)fullyDismissedState;
+ (id)fullyPresentedState;
+ (id)stateWithType:(unsigned long long)a0 interactive:(BOOL)a1 progress:(double)a2;
+ (BOOL)isSignificantStatusBarTransitionFrom:(id)a0 to:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithType:(unsigned long long)a0 interactive:(BOOL)a1 progress:(double)a2;
- (double)snappedStatusBarPresentationProgress;

@end
