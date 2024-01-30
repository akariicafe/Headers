@class PLXPCListenerOperatorComposition;

@interface PLWatchKitAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *xpcHandler;

+ (void)load;
+ (id)entryEventPointDefinitions;

- (void).cxx_destruct;
- (id)appNameForWatchAppExtension:(id)a0;
- (void)initOperatorDependancies;

@end
