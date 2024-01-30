@interface ActivityDispatcher : NSObject

+ (id)getExecQ;
+ (id)getErrorNoCollectorDefinitionsToRun;
+ (id)getErrorFailedCollectors:(id)a0;

- (void)runCollectorsDefinedInParameters:(id)a0 completion:(id /* block */)a1;

@end
