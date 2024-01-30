@class NSProgress, NSObject;
@protocol OS_dispatch_queue;

@interface VMOperation : NSOperation

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSProgress *progress;

- (void)performSynchronousBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)configureProgressWithUnitCount:(long long)a0;

@end
