@class PLCFNotificationOperatorComposition;

@interface PLAccessibilityAgent : PLAgent

@property (readonly) PLCFNotificationOperatorComposition *notificationReduceMotionChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationBackgroundContrastChanged;

+ (void)load;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventForwardReduceMotion;
- (void)logEventForwardBackgroundContrast;

@end
