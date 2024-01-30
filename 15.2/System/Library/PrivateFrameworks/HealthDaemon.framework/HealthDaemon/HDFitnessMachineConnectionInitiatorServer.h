@class NSString;
@protocol HDFitnessMachineConnectionInitiatorProtocol;

@interface HDFitnessMachineConnectionInitiatorServer : HDStandardTaskServer <HKFitnessMachineConnectionInitiatorServerInterface> {
    id<HDFitnessMachineConnectionInitiatorProtocol> _connectionInitiatorServer;
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
- (void)remote_simulateAccept;
- (void)connectionInterrupted;
- (void)remote_registerConnectionInitiatorClient:(id)a0;
- (void)remote_permitConnectionForFitnessMachineSessionUUID:(id)a0 activityType:(unsigned long long)a1;
- (void)remote_forbidConnectionForFitnessMachineSessionUUID:(id)a0;
- (void)remote_simulateTapWithFitnessMachineType:(unsigned long long)a0;
- (id)exportedInterface;

@end
