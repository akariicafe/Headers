@class PLXPCListenerOperatorComposition;

@interface PLEduAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *syncBubbleStatusNotification;

+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionMode;
+ (id)entryEventPointDefinitionSyncBubble;
+ (void)load;

- (void)logEventPointMode:(BOOL)a0;
- (void)log;
- (void).cxx_destruct;
- (id)init;
- (void)initOperatorDependancies;

@end
