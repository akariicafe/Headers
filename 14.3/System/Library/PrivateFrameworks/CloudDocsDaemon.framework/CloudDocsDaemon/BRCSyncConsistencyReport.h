@class BRMangledID, BRCItemGlobalID, NSError, NSURL;

@interface BRCSyncConsistencyReport : NSObject {
    long long _failureRetryCount;
    NSURL *_fileURL;
    BOOL _containsSharedToMeItem;
}

@property (readonly, nonatomic) long long itemCountDifference;
@property (readonly, nonatomic) BOOL wasAbleToRun;
@property (readonly, nonatomic) NSError *lastError;
@property (readonly, nonatomic) BRCItemGlobalID *itemGlobalID;
@property (readonly, nonatomic) BRMangledID *zoneMangledID;

+ (void)generateReportForSharedFolder:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_finishReport:(id)a0 session:(id)a1 completionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)shareChangedDuringCheckWithSession:(id)a0;
- (id)telemetryEvent;
- (void)incrementErrorRetryCountWithSession:(id)a0;

@end
