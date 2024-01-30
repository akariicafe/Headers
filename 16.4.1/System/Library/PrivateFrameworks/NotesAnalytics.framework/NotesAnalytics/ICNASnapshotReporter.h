@class NSManagedObjectContext, ICNAHistogramManager;
@protocol ICLegacyContext;

@interface ICNASnapshotReporter : ICNAEventReporter

@property (retain, nonatomic) ICNAHistogramManager *accountHistogramManager;
@property BOOL isPerformingSnapshot;
@property (retain, nonatomic) id<ICLegacyContext> htmlContext;
@property (retain, nonatomic) NSManagedObjectContext *modernContext;
@property long long contextHolderCount;

+ (id)sharedReporter;

- (void).cxx_destruct;
- (BOOL)shouldSnapshot;
- (id)accountPurposeForModernAccount:(id)a0;
- (id)snapshotItemDataForHTMLAccount:(id)a0;
- (id)userSnapshotSummaryForDataType:(Class)a0;
- (id)accountPurposeForHTMLAccount;
- (void)checkIfSnapshotNotFiredForALongTime;
- (id)deviceSnapshotSummaryForDataType:(Class)a0;
- (id)drawingSnapshotItemDataForDrawingAttachment:(id)a0;
- (id)lastSnapshotRunningTimeStamp;
- (id)lastSnapshotScheduleTimeStamp;
- (unsigned long long)pageCountForDocScanAttachment:(id)a0;
- (void)performBlockForHTMLManagedObjectContext:(id /* block */)a0;
- (void)performBlockForModernManagedObjectContext:(id /* block */)a0;
- (void)reallyPerformSnapshotAndFlushWithCompletionHandler:(id /* block */)a0;
- (void)scheduleSnapshotIfNecessary;
- (void)setupContextsIfNecessary;
- (BOOL)shouldRunSnapshotManually;
- (BOOL)shouldScheduleSnapshot;
- (void)snapshotAttachment:(id)a0 reportedDataToNote:(id)a1 reportedDataToAccount:(id)a2;
- (void)snapshotDevice;
- (void)snapshotHTMLAccount:(id)a0 reportedDataToDevice:(id)a1 reportedDataFromFolderToDevice:(id)a2 reportedDataFromNoteToDevice:(id)a3;
- (void)snapshotHTMLFolder:(id)a0 reportedDataToAccount:(id)a1 reportedDataToDevice:(id)a2 noteReportToAccount:(id)a3 reportedDataFromNoteToDevice:(id)a4;
- (void)snapshotHTMLNote:(id)a0 reportedDataToAccount:(id)a1 reportedDataToDevice:(id)a2;
- (id)snapshotItemDataForModernAccount:(id)a0;
- (void)snapshotModernAccount:(id)a0 reportedDataToDevice:(id)a1 reportedDataFromFolderToDevice:(id)a2 reportedDataFromNoteToDevice:(id)a3;
- (void)snapshotModernFolder:(id)a0 reportedDataToParentFolder:(id)a1 reportedDataToAccount:(id)a2 reportedDataToDevice:(id)a3 reportedDataFromNotesToAccount:(id)a4 reportedDataFromAttachmentToAccount:(id)a5 reportedDataFromNoteToDevice:(id)a6;
- (void)snapshotModernNote:(id)a0 reportedDataToAccount:(id)a1 reportToDevice:(id)a2 reportedDataFromAttachmentToAccount:(id)a3;
- (id)sortedFoldersForAccount:(id)a0;
- (void)submitMiniSnapshot;
- (void)submitSnapshotScheduleEventWithResult:(long long)a0 error:(id)a1 lastScheduledTime:(id)a2;
- (id)tableSnapshotItemDataForTableAttachment:(id)a0;
- (void)tearDownContextsIfNecessary;
- (double)timeStampOfDate:(id)a0;

@end
