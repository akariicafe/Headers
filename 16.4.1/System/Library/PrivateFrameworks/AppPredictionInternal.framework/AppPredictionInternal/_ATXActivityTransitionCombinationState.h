@interface _ATXActivityTransitionCombinationState : NSObject <NSCopying>

@property (nonatomic) unsigned long long timeBasedActivity;
@property (nonatomic) double timeBasedConfidence;
@property (readonly, nonatomic) double scaledTimeBasedConfidence;
@property (nonatomic) unsigned long long appLaunchActivity;
@property (nonatomic) double appLaunchConfidence;
@property (readonly, nonatomic) double scaledAppLaunchConfidence;
@property (nonatomic) unsigned long long heuristicActivity;
@property (nonatomic) double heuristicConfidence;
@property (readonly, nonatomic) double scaledHeuristicConfidence;
@property (nonatomic) unsigned long long computedModeActivity;
@property (nonatomic) double computedModeConfidence;
@property (readonly, nonatomic) double scaledComputedModeConfidence;
@property (nonatomic) double timestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)startTransition;
- (id)endTransitionWithTimestamp:(double)a0;
- (BOOL)hasSameTopActivityAndConfidenceAsOther:(id)a0;
- (id)newStateFromTransition:(id)a0;
- (id)topActivityWithConfidence;

@end
