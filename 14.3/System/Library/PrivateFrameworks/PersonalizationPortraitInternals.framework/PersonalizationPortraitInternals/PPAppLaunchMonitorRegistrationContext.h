@class NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface PPAppLaunchMonitorRegistrationContext : NSObject

@property (readonly, nonatomic) NSNumber *token;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id /* block */ handler;

- (void).cxx_destruct;
- (id)initWithToken:(id)a0 queue:(id)a1 handler:(id /* block */)a2;

@end
