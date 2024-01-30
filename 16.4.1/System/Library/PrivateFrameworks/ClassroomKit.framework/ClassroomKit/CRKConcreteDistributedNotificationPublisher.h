@class NSString;

@interface CRKConcreteDistributedNotificationPublisher : NSObject <CRKDistributedNotificationPublisher>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subscribeToNotificationWithName:(id)a0 handler:(id /* block */)a1;

@end
