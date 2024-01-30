@class CNQueue;

@interface _CNObservableEventDynamicQueueBufferingStrategy : _CNObservableEventBufferingStrategy

@property (readonly, nonatomic) CNQueue *queue;

- (id)initWithQueue:(id)a0;
- (BOOL)isSequenceTerminated;
- (void)addEvent:(id)a0;
- (void).cxx_destruct;
- (id)allEvents;

@end
