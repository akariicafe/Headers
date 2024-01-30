@class PLXPCListenerOperatorComposition;

@interface PLWatchKitAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *xpcHandler;

+ (id)entryEventPointDefinitions;
+ (void)load;

- (void)initOperatorDependancies;
- (id)appNameForWatchAppExtension:(id)a0;
- (void).cxx_destruct;

@end
