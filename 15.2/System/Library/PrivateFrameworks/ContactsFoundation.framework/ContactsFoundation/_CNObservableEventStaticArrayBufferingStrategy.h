@class NSArray;

@interface _CNObservableEventStaticArrayBufferingStrategy : _CNObservableEventBufferingStrategy

@property (readonly, nonatomic) NSArray *events;

- (BOOL)isSequenceTerminated;
- (void)addEvent:(id)a0;
- (void).cxx_destruct;
- (id)allEvents;
- (id)initWithEvents:(id)a0;

@end
