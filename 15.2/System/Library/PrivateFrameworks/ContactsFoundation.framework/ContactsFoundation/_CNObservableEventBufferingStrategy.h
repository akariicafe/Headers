@interface _CNObservableEventBufferingStrategy : NSObject

+ (id)strategyWithQueue:(id)a0;
+ (id)strategyWithEvents:(id)a0;

- (BOOL)isSequenceTerminated;
- (void)addEvent:(id)a0;
- (id)allEvents;

@end
