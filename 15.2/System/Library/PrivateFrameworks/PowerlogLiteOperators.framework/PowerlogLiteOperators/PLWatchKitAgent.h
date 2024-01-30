@class PLXPCListenerOperatorComposition;

@interface PLWatchKitAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *xpcHandler;

+ (id)entryEventPointDefinitions;
+ (void)load;

- (id)appNameForWatchAppExtension:(id)a0;
- (void).cxx_destruct;
- (void)initOperatorDependancies;

@end
