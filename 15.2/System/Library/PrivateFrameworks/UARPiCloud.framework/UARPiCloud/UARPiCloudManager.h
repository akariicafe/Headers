@class UARPiCloudContainer, NSObject;
@protocol OS_dispatch_queue, OS_os_log, UARPiCloudManagerDelegate;

@interface UARPiCloudManager : NSObject

@property (readonly) UARPiCloudContainer *container;
@property (readonly) NSObject<OS_dispatch_queue> *recordProcessingQueue;
@property (readonly) id<UARPiCloudManagerDelegate> delegate;
@property (readonly) NSObject<OS_os_log> *log;

- (void).cxx_destruct;
- (void)performRemoteFetchForCHIPVerificationCertificateSync;
- (void)processCHIPAccessoriesRecords:(id)a0 inZone:(id)a1;
- (void)handleRemoteFetchRequestSyncForCHIPAccessoriesMetadata:(id *)a0 inZone:(id)a1;
- (long long)fetchRemoteDatabaseChangesInContainer:(id)a0 completion:(id /* block */)a1;
- (BOOL)processCHIPAccessoriesRecord:(id)a0 inZone:(id)a1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)copyPublicKeyFromCertificateID:(id)a0;
- (id)calculateDigestFromCHIPAccessoriesRecord:(id)a0;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)copyPublicKeyForVerificationCertificateData:(id)a0 policy:(struct __SecPolicy { } *)a1;
- (void)handleRemoteFetchRequestForCHIPAccessoriesMetadataInZone:(id)a0;
- (void)handleRemoteFetchRequestForAccessories:(id)a0;
- (BOOL)fetchVerificationCertificateInContainer:(id)a0;
- (void)fetchZoneChangesInContainer:(id)a0 forAccessories:(id)a1;
- (void)processUpdatedRecordsInContainer:(id)a0 forAccessories:(id)a1;
- (void)processVerificationCertificateRecord:(id)a0 forContainer:(id)a1;
- (void)processRecordsInContainer:(id)a0 forAccessory:(id)a1;
- (void)processCKRecord:(id)a0 inContainer:(id)a1 forAccessory:(id)a2;
- (BOOL)validateSignatureForUARPAccessoryRecord:(id)a0 inContainer:(id)a1;
- (id)calculateDigestFromUARPAccessoryRecord:(id)a0;
- (id)initWithDelegate:(id)a0 containerID:(id)a1;
- (void)performRemoteFetchForAccessories:(id)a0;
- (id)filterInterestedZonesInContainer:(id)a0 forAccessories:(id)a1;
- (void)performRemoteFetchForSupportedAccessoriesMetadataInZone:(id)a0;

@end
