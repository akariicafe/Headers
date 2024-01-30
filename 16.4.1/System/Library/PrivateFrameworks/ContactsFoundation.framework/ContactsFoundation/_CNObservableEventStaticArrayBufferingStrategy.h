@class NSArray;

@interface _CNObservableEventStaticArrayBufferingStrategy : _CNObservableEventBufferingStrategy

@property (readonly, nonatomic) NSArray *events;

- (void)addEvent:(id)a0;
- (id)allEvents;
- (void).cxx_destruct;
- (BOOL)isSequenceTerminated;
- (id)initWithEvents:(id)a0;

@end
