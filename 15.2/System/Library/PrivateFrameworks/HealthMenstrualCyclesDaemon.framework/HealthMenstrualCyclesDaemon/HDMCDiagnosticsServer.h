@class HDHealthStoreClient, NSString, HDProfile, NSObject, HDMCProfileExtension;
@protocol OS_dispatch_queue;

@interface HDMCDiagnosticsServer : HDStandardTaskServer <HDMenstrualCyclesDiagnosticsServerInterface> {
    HDProfile *_profile;
    HDMCProfileExtension *_profileExtension;
    HDHealthStoreClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;

- (void)connectionInvalidated;
- (id)remoteInterface;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 profileExtension:(id)a4;
- (id)exportedInterface;
- (void)remote_triggerAnalysisForDiagnosticsWithCompletion:(id /* block */)a0;

@end
