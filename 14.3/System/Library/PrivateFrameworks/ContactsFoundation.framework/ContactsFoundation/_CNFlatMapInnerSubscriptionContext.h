@class CNSuspendableSchedulerDecorator;
@protocol CNCancelable;

@interface _CNFlatMapInnerSubscriptionContext : NSObject

@property (readonly, nonatomic) CNSuspendableSchedulerDecorator *decorator;
@property (readonly, nonatomic) id<CNCancelable> token;

- (void).cxx_destruct;
- (id)initWithDecorator:(id)a0 token:(id)a1;

@end
