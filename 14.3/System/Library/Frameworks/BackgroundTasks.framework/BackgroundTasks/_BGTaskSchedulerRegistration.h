@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _BGTaskSchedulerRegistration : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ launchHandler;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 queue:(id)a1 launchHandler:(id /* block */)a2;

@end
