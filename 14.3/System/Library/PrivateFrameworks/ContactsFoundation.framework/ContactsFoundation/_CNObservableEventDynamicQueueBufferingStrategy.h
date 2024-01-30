@class CNQueue;

@interface _CNObservableEventDynamicQueueBufferingStrategy : _CNObservableEventBufferingStrategy

@property (readonly, nonatomic) CNQueue *queue;

- (void)addEvent:(id)a0;
- (id)allEvents;
- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSequenceTerminated;

@end
