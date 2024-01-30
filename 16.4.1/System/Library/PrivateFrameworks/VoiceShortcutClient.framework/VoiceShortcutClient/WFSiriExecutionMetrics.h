@interface WFSiriExecutionMetrics : NSObject

@property (nonatomic) unsigned long long shortcutActionCount;
@property (nonatomic) unsigned long long currentShortcutStep;
@property (nonatomic) unsigned long long siriInteractionCount;

- (id)init;

@end
