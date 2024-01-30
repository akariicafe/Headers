@interface HealthRecordsUI.DownloadableAttachmentStateChangeListener : NSObject <HKClinicalDocumentStoreStateChangeListener> {
    void /* unknown type, empty encoding */ _latestChange;
    void /* unknown type, empty encoding */ handler;
}

- (id)init;
- (void).cxx_destruct;
- (void)downloadableAttachmentDidChangeState:(id)a0;

@end
