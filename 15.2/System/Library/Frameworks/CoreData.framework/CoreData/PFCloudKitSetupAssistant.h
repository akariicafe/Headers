@class CKDatabase, NSURL, PFCloudKitStoreMonitor, CKContainer, CKRecordID, NSObject, NSCloudKitMirroringDelegateOptions, CKDatabaseSubscription, NSPersistentCloudKitContainerEvent, NSCloudKitMirroringDelegateSetupRequest;
@protocol OS_dispatch_semaphore;

@interface PFCloudKitSetupAssistant : NSObject {
    NSCloudKitMirroringDelegateOptions *_mirroringOptions;
    CKContainer *_container;
    CKDatabase *_database;
    CKDatabaseSubscription *_databaseSubscription;
    NSURL *_largeBlobDirectoryURL;
    NSObject<OS_dispatch_semaphore> *_cloudKitSemaphore;
    PFCloudKitStoreMonitor *_storeMonitor;
    NSPersistentCloudKitContainerEvent *_setupEvent;
    NSCloudKitMirroringDelegateSetupRequest *_setupRequest;
    CKRecordID *_currentUserRecordID;
}

- (id)initWithSetupRequest:(id)a0 mirroringOptions:(id)a1 observedStore:(id)a2;
- (void)dealloc;

@end
