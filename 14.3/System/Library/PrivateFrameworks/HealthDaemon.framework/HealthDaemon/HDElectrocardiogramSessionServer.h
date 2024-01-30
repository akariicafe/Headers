@class NSString, HKElectrocardiogramSessionConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface HDElectrocardiogramSessionServer : HDStandardTaskServer <HKElectrocardiogramSessionServerInterface> {
    HKElectrocardiogramSessionConfiguration *_sessionConfiguration;
    NSObject<OS_dispatch_queue> *_queue;
    long long _sessionState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (Class)configurationClass;

- (void)connectionInvalidated;
- (void).cxx_destruct;
- (id)remoteInterface;
- (void)connectionInterrupted;
- (void)remote_startWithCompletion:(id /* block */)a0;
- (void)remote_abortWithCompletion:(id /* block */)a0;
- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_abortSensorSession;
- (void)_queue_startWithCompletion:(id /* block */)a0;
- (void)_queue_abortWithCompletion:(id /* block */)a0;
- (void)_queue_notifyClientDidEndWithEndReason:(long long)a0 error:(id)a1;
- (void)_queue_notifyClientDidDetectContactAtDate:(id)a0;
- (void)_queue_notifyClientDidDetectEmergencyCallbackModeWithEndDate:(id)a0;

@end
