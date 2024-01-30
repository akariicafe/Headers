@class PLCFNotificationOperatorComposition;

@interface PLAccessibilityAgent : PLAgent

@property (readonly) PLCFNotificationOperatorComposition *notificationReduceMotionChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationBackgroundContrastChanged;

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardNameAssistiveTouch;
+ (id)entryEventForwardNameReduceMotion;
+ (id)entryEventForwardNameHandGestures;
+ (id)entryEventForwardNameBackgroundContrast;
+ (id)entryEventForwardDefinitions;
+ (void)load;

- (void)log;
- (void).cxx_destruct;
- (void)logEventForwardBackgroundContrast;
- (id)init;
- (void)logEventForwardReduceMotion;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;

@end
