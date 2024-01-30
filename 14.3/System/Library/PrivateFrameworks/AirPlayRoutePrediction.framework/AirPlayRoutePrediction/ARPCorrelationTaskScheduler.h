@class NSDate, NSObject;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying;

@interface ARPCorrelationTaskScheduler : NSObject

@property (readonly, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy) NSDate *bookmark;

- (void)_executeHomeControlMicrolocationCorrelationTask;
- (void).cxx_destruct;
- (void)executeCorrelationTask;
- (void)dealloc;
- (void)_executeCorrelationTask;
- (void)_executeHomeControlNextActionCorrelationTask;
- (void)nowPlayingEventInserted:(id)a0;
- (id)initWithKnowledgeStore:(id)a0;
- (void)microLocationEventInserted:(id)a0;
- (void)homeKitEventInserted:(id)a0;

@end
