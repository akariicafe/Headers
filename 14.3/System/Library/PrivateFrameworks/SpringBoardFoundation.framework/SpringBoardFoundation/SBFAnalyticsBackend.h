@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SBFAnalyticsBackend : NSObject <SBFAnalyticsBackendEventHandling> {
    NSMutableArray *_asyncEventHandlers;
    NSMutableArray *_syncEventHandlers;
    NSMutableDictionary *_stateQueryHandlers;
    NSObject<OS_dispatch_queue> *_queryHandlerQueue;
    NSObject<OS_dispatch_queue> *_asyncHandlerQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)registerForQueryName:(unsigned long long)a0 handler:(id /* block */)a1;
- (BOOL)handleEvent:(unsigned long long)a0 withContext:(id)a1;
- (void)registerSynchronousEventHandler:(id)a0;
- (void)registerEventHandler:(id)a0;
- (void)stateForQueryName:(unsigned long long)a0 completion:(id /* block */)a1;

@end
