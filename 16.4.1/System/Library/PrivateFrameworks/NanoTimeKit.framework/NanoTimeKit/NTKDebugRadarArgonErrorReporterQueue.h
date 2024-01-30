@class NTKFirstUnlockQueue, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface NTKDebugRadarArgonErrorReporterQueue : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NTKFirstUnlockQueue *unlockQueue;
@property (nonatomic) BOOL canSubmitReports;
@property (readonly, nonatomic) NSString *queueDirectoryPath;

- (void).cxx_destruct;
- (void)_queue_deleteStagedReports;
- (void)_queue_handleEnqueuedReports;
- (void)enqueueReportWithTitle:(id)a0 description:(id)a1 attachmentURLs:(id)a2;
- (id)initWithQueueDirectoryPath:(id)a0;
- (void)queue_enqueueReportWithTitle:(id)a0 description:(id)a1 attachmentURLs:(id)a2;

@end
