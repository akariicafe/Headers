@class NSString, HDFitnessMachineManager;

@interface HDFitnessMachineConnectionServer : HDStandardTaskServer <HKFitnessMachineConnectionServerInterface> {
    HDFitnessMachineManager *_fitnessMachineManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;

- (void).cxx_destruct;
- (id)remoteInterface;
- (void)connectionInterrupted;
- (void)remote_markClientReady;
- (void)remote_registerClient:(id)a0;
- (void)remote_endFitnessMachineConnection;
- (void)remote_endFitnessMachineConnectionForFitnessMachineSessionUUID:(id)a0;
- (void)remote_simulateDisconnect;
- (id)exportedInterface;

@end
