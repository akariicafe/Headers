@class BPSSink, NSDate, NSObject;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying;

@interface ARPCorrelationTaskScheduler : NSObject

@property (readonly, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BPSSink *sinkAccessories;
@property (readonly, nonatomic) BPSSink *sinkMediaAccessories;
@property (readonly, nonatomic) BPSSink *sinkScenes;
@property (copy) NSDate *bookmark;

- (void)homeKitEventInserted;
- (void)nowPlayingEventInserted:(id)a0;
- (void)microLocationEventInserted:(id)a0;
- (void)executeCorrelationTask;
- (void)_executeHomeControlMicrolocationCorrelationTask;
- (id)initWithKnowledgeStore:(id)a0;
- (void).cxx_destruct;
- (void)_executeHomeControlNextActionCorrelationTask;
- (void)_executeCorrelationTask;
- (void)dealloc;

@end
