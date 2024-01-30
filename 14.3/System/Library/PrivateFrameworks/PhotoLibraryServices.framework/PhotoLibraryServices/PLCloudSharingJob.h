@class NSString, PLPhotoLibrary;

@interface PLCloudSharingJob : PLDaemonJob {
    NSString *_archiveFilename;
}

@property (readonly, nonatomic) PLPhotoLibrary *transientPhotoLibrary;
@property (nonatomic) BOOL shouldPrioritize;

+ (id)recoveredEventsWithPathManager:(id)a0;
+ (id)highPriorityOperationQueue;
+ (id)lowPriorityOperationQueue;
+ (void)deleteAllRecoveryEventsWithPathManager:(id)a0;

- (void).cxx_destruct;
- (void)runDaemonSide;
- (void)runAndWaitForMessageToBeSent;
- (id)initWithAssetsdClient:(id)a0;
- (BOOL)shouldArchiveXPCToDisk;
- (void)archiveXPCToDisk:(id)a0;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;

@end
