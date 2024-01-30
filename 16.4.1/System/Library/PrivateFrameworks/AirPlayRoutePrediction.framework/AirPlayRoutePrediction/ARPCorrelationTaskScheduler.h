@class BPSSink, NSDate, NSObject;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying;

@interface ARPCorrelationTaskScheduler : NSObject

@property (readonly, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BPSSink *sinkAccessories;
@property (readonly, nonatomic) BPSSink *sinkMediaAccessories;
@property (readonly, nonatomic) BPSSink *sinkScenes;
@property (copy) NSDate *bookmark;

- (id)initWithKnowledgeStore:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_executeCorrelationTask;
- (void)_executeHomeControlMicrolocationCorrelationTask;
- (void)_executeHomeControlNextActionCorrelationTask;
- (void)executeCorrelationTask;
- (void)homeKitEventInserted;
- (void)microLocationEventInserted:(id)a0;
- (void)nowPlayingEventInserted:(id)a0;

@end
