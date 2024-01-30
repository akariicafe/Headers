@class NSArray, NSUUID, NSError, HKMedicalDownloadableAttachment;

@interface HealthRecordsDaemon.ClinicalDocumentDownloader : NSObject <HKClinicalDocumentDownloaderInterface, _HKXPCExportable> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ taskCoordinator;
    void /* unknown type, empty encoding */ documentStore;
    void /* unknown type, empty encoding */ accountStore;
}

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)remote_beginOrResumeDownloadingAttachments:(NSArray *)a0 completion:(void (^)(BOOL, NSError *))a1;
- (void)remote_downloadAttachment:(HKMedicalDownloadableAttachment *)a0 completion:(void (^)(BOOL, NSError *))a1;
- (void)remote_pingDownloaderWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)remote_triggerDownloadForAttachment:(NSUUID *)a0 completion:(void (^)(BOOL, NSError *))a1;
- (id)init;
- (void).cxx_destruct;

@end
