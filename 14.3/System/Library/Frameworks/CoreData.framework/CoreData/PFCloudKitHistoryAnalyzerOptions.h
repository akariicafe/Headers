@class CKSchedulerActivity, CKRecordZone;

@interface PFCloudKitHistoryAnalyzerOptions : PFHistoryAnalyzerOptions

@property (retain, nonatomic) CKRecordZone *recordZone;
@property (nonatomic) BOOL includePrivateTransactions;
@property (retain, nonatomic) CKSchedulerActivity *activity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithRecordZone:(id)a0;

@end
