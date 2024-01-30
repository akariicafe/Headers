@class UARPiCloudContainer, NSObject;
@protocol OS_os_log, OS_dispatch_queue, UARPiCloudManagerDelegate;

@interface UARPiCloudManager : NSObject {
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_queue> *_recordProcessingQueue;
    id<UARPiCloudManagerDelegate> _delegate;
    UARPiCloudContainer *_container;
}

- (void).cxx_destruct;
- (void)handleRemoteFetchRequestForAccessories:(id)a0;
- (BOOL)fetchVerificationCertificateInContainer:(id)a0;
- (void)fetchZoneChangesInContainer:(id)a0 forAccessories:(id)a1;
- (long long)fetchRemoteDatabaseChangesInContainer:(id)a0 completion:(id /* block */)a1;
- (void)processUpdatedRecordsInContainer:(id)a0 forAccessories:(id)a1;
- (void)processVerificationCertificateRecord:(id)a0 forContainer:(id)a1;
- (void)processRecordsInContainer:(id)a0 forAccessory:(id)a1;
- (void)processCKRecord:(id)a0 inContainer:(id)a1 forAccessory:(id)a2;
- (BOOL)validateSignatureForUARPAccessoryRecord:(id)a0 inContainer:(id)a1;
- (id)calculateDigestFromUARPAccessoryRecord:(id)a0;
- (id)initWithDelegate:(id)a0 containerID:(id)a1;
- (void)performRemoteFetchForAccessories:(id)a0;
- (id)filterInterestedZonesInContainer:(id)a0 forAccessories:(id)a1;

@end
