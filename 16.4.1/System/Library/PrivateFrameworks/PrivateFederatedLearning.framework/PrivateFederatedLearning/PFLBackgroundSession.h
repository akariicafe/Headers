@class PFLForegroundSession, BGTask, NSCondition, NSObject;
@protocol OS_dispatch_queue, PFLDataSource;

@interface PFLBackgroundSession : NSObject <PFLForegroundSessionDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) BGTask *task;
@property (retain, nonatomic) PFLForegroundSession *session;
@property (readonly, nonatomic) NSCondition *readyCondition;
@property (retain, nonatomic) id<PFLDataSource> dataSource;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)registerWithIdentifier:(id)a0;
- (void)didCompleteAllTasks;
- (BOOL)resumeWithDataSource:(id)a0;
- (BOOL)submitTaskRequestWithIdentifier:(id)a0 andError:(id *)a1;

@end
