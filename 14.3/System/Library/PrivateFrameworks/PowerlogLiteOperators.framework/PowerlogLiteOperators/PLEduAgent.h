@class PLXPCListenerOperatorComposition;

@interface PLEduAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *syncBubbleStatusNotification;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionSyncBubble;
+ (id)entryEventPointDefinitionMode;

- (id)init;
- (void).cxx_destruct;
- (void)logEventPointMode:(BOOL)a0;
- (void)log;
- (void)initOperatorDependancies;

@end
