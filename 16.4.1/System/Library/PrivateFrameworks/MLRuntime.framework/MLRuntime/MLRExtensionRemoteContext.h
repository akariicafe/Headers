@class NSString, NSObject;
@protocol OS_os_transaction, MLRTaskPerforming, OS_dispatch_queue;

@interface MLRExtensionRemoteContext : NSExtensionContext <MLRExtensionRemoteProtocol> {
    NSObject<OS_dispatch_queue> *_taskExecutionQueue;
    NSObject<OS_dispatch_queue> *_stopQueue;
}

@property (retain, nonatomic) NSObject<OS_os_transaction> *taskTransaction;
@property (retain, nonatomic) NSObject<OS_os_transaction> *stopTransaction;
@property (retain, nonatomic) id<MLRTaskPerforming> plugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void)stop;
- (void).cxx_destruct;
- (BOOL)loadPluginIfNecessaryWithError:(id *)a0;
- (id)createDodMLServer;
- (id)createMLRTrialTaskWithTask:(id)a0;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2 plugin:(id)a3;
- (void)performDodMLTask:(id)a0 sandBoxExtensions:(id)a1 completion:(id /* block */)a2;
- (void)performSynchronouslyDodMLTask:(id)a0 sandBoxExtensions:(id)a1 completion:(id /* block */)a2;
- (id)performSynchronouslyTask:(id)a0 sandBoxExtensions:(id)a1 error:(id *)a2;
- (void)performSynchronouslyTrialTask:(id)a0 completion:(id /* block */)a1;
- (void)performTask:(id)a0 sandBoxExtensions:(id)a1 completion:(id /* block */)a2;
- (void)performTrialTask:(id)a0 completion:(id /* block */)a1;
- (id)processTaskResult:(id)a0 forTask:(id)a1 duration:(double)a2 error:(id *)a3;
- (void)simulateCrash;
- (void)stopSynchronously;

@end
