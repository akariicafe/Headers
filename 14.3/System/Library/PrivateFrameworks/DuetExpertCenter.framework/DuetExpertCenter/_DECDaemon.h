@class NSXPCListener, NSString, _DECDailyTrainingScheduler, _DECExpertManager, NSObject, _DECServerResponder;
@protocol OS_dispatch_queue;

@interface _DECDaemon : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    _DECExpertManager *_expertManager;
    _DECServerResponder *_serverResponder;
    _DECDailyTrainingScheduler *_trainingScheduler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_runDelayedInitializationOperations;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)_getServerResponder;

@end
