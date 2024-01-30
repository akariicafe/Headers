@class PLXPCListenerOperatorComposition;

@interface PLEduAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *syncBubbleStatusNotification;

+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitionMode;
+ (id)entryEventPointDefinitionSyncBubble;

- (void)initOperatorDependancies;
- (void)logEventPointMode;
- (void)log;
- (id)init;
- (void).cxx_destruct;

@end
