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

- (void).cxx_destruct;
- (void)dealloc;
- (void)killAllTimers;
- (double)deferredTimerInterval;
- (void)setLastFolderContentRequestDate:(id)a0 forFolderWithId:(id)a1;
- (long long)clientBehaviorForFolderIds:(id)a0;
- (long long)clientBehaviorForFolderList;
- (long long)clientBehaviorForFolderContents;
- (BOOL)allowFolderWipe;

@end
