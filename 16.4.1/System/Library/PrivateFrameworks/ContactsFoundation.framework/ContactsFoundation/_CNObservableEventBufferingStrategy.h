@interface _CNObservableEventBufferingStrategy : NSObject

+ (id)strategyWithEvents:(id)a0;
+ (id)strategyWithQueue:(id)a0;

- (void)addEvent:(id)a0;
- (id)allEvents;
- (BOOL)isSequenceTerminated;

@end
