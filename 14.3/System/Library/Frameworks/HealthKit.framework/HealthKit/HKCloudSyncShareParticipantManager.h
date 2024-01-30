@class NSString, HKTaskServerProxyProvider, HKHealthStore;

@interface HKCloudSyncShareParticipantManager : NSObject <_HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
    HKHealthStore *_healthStore;
}

@property (readonly, nonatomic) long long lastKnownParticipantSharingStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)clientInterface;
+ (id)serverInterface;

- (void)connectionInvalidated;
- (void).cxx_destruct;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)fetchAllShareParticipantEmailAddressesWithCompletion:(id /* block */)a0;
- (void)revokeAccessForAllShareParticipantsWithCompletion:(id /* block */)a0;
- (void)tearDownHealthSharingForProfile:(id)a0 completion:(id /* block */)a1;
- (id)initWithHealthStore:(id)a0;

@end
