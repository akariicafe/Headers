@class NSObject, NSMutableDictionary, NSDate;
@protocol OS_dispatch_source;

@interface DADClientAccountTimers : NSObject

@property (retain, nonatomic) NSMutableDictionary *folderIdToLastFolderContentsRequestDate;
@property (retain, nonatomic) NSDate *lastAllFolderContentsRequestDate;
@property (retain, nonatomic) NSDate *lastFolderListRequestDate;
@property (retain, nonatomic) NSDate *lastFolderWipeRequestDate;
@property (weak, nonatomic) NSObject<OS_dispatch_source> *deferredAllFolderContentsSource;
@property (weak, nonatomic) NSObject<OS_dispatch_source> *deferredFolderListSource;
@property (weak, nonatomic) NSObject<OS_dispatch_source> *deferredFolderContentsSource;

- (long long)clientBehaviorForFolderIds:(id)a0;
- (double)deferredTimerInterval;
- (void).cxx_destruct;
- (BOOL)allowFolderWipe;
- (void)killAllTimers;
- (void)dealloc;
- (long long)clientBehaviorForFolderContents;
- (long long)clientBehaviorForFolderList;
- (void)setLastFolderContentRequestDate:(id)a0 forFolderWithId:(id)a1;

@end
