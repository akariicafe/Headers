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

+ (id)serverInterface;
+ (id)clientInterface;

- (id)remoteInterface;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)init;
- (void)startWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)abortWithCompletion:(id /* block */)a0;
- (void)clientRemote_didDetectContactAtDate:(id)a0;
- (void)clientRemote_didDetectEmergencyCallbackModeWithEndDate:(id)a0;
- (void)clientRemote_didEndWithReason:(long long)a0 error:(id)a1;
- (id)initWithHealthStore:(id)a0 configuration:(id)a1;

@end
