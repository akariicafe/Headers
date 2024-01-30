@class PFLForegroundSession, BGTask, NSCondition, NSObject;
@protocol OS_dispatch_queue, PFLDataSource;

@interface PFLBackgroundSession : NSObject <PFLForegroundSessionDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) BGTask *task;
@property (retain, nonatomic) PFLForegroundSession *session;
@property (readonly, nonatomic) NSCondition *readyCondition;
@property (retain, nonatomic) id<PFLDataSource> dataSource;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (BOOL)submitTaskRequestWithIdentifier:(id)a0 andError:(id *)a1;
- (void)didCompleteAllTasks;
- (void)registerWithIdentifier:(id)a0;
- (BOOL)resumeWithDataSource:(id)a0;

@end
