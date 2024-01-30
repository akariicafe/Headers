@class NSString, HKHealthStore, HKTaskServerProxyProvider, HKElectrocardiogramSessionConfiguration;
@protocol HKElectrocardiogramSessionDelegate;

@interface HKElectrocardiogramSession : NSObject <_HKXPCExportable, HKElectrocardiogramSessionClientInterface> {
    HKHealthStore *_healthStore;
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (class, readonly) BOOL isElectrocardiogramSessionAvailable;

@property (readonly, copy, nonatomic) HKElectrocardiogramSessionConfiguration *sessionConfiguration;
@property (weak, nonatomic) id<HKElectrocardiogramSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;

- (void)connectionInvalidated;
- (id)init;
- (void).cxx_destruct;
- (id)remoteInterface;
- (void)connectionInterrupted;
- (id /* block */)_successCompletionBlockOnClientQueue:(id /* block */)a0;
- (void)clientRemote_didDetectContactAtDate:(id)a0;
- (void)clientRemote_didEndWithReason:(long long)a0 error:(id)a1;
- (void)clientRemote_didDetectEmergencyCallbackModeWithEndDate:(id)a0;
- (void)abortWithCompletion:(id /* block */)a0;
- (id)initWithHealthStore:(id)a0 configuration:(id)a1;
- (void)startWithCompletion:(id /* block */)a0;
- (id)exportedInterface;

@end
