@class NSString, HKTaskServerProxyProvider;

@interface HKHealthRecordsAccountInfoStore : NSObject <_HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void).cxx_destruct;
- (id)init;
- (id)exportedInterface;
- (void)determineMedicalRecordsAccountInfoStatusWithCompletion:(id /* block */)a0;

@end
