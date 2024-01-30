@class PLXPCListenerOperatorComposition;

@interface PLHealthKitAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *queryHandler;
@property (retain) PLXPCListenerOperatorComposition *cloudSyncHandler;

+ (id)entryEventPointDefinitions;
+ (void)load;

- (void)initOperatorDependancies;
- (void).cxx_destruct;

@end
