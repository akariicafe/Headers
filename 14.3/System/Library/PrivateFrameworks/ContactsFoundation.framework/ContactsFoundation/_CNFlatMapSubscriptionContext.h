@class CNQueue, NSMutableArray;
@protocol CNScheduler;

@interface _CNFlatMapSubscriptionContext : NSObject

@property (readonly, nonatomic) CNQueue *decorators;
@property (readonly, nonatomic) NSMutableArray *tokens;
@property (readonly, nonatomic) id<CNScheduler> downstream;
@property (readonly, nonatomic) id<CNScheduler> resourceLock;
@property (nonatomic, getter=isOperatorReceiving) BOOL operatorReceiving;
@property (nonatomic, getter=isObserverReceiving) BOOL observerReceiving;

- (id)initWithSchedulerProvider:(id)a0;
- (void).cxx_destruct;

@end
