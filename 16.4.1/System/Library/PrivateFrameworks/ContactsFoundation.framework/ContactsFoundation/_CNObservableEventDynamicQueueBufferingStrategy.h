@class CNQueue;

@interface _CNObservableEventDynamicQueueBufferingStrategy : _CNObservableEventBufferingStrategy

@property (readonly, nonatomic) CNQueue *queue;

- (void)addEvent:(id)a0;
- (id)allEvents;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (BOOL)isSequenceTerminated;

@end
