@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCollaborationNoticeRateLimiter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *persistenceQueue;
@property (retain, nonatomic) NSMutableDictionary *noticeEventHistory;

+ (id)loadNoticeEventHistory;
+ (long long)defaultThreshold;
+ (id)peristencePath;
+ (long long)commentThreshold;
+ (long long)participantChangeThreshold;

- (id)dateLastUpdatedForURL:(id)a0;
- (BOOL)shouldSendNotice:(id)a0;
- (void)saveNoticeEventHistory;
- (void)didSendNotice:(id)a0;
- (long long)thresholdForNoticeType:(long long)a0;
- (id)init;
- (void).cxx_destruct;

@end
