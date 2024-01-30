@class NSObject;
@protocol OS_dispatch_queue;

@interface AEConcreteSystemNotificationPrimitives : NSObject <AESystemNotificationPrimitives> {
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)observeAssessmentStateChangeWithHandler:(id /* block */)a0;

@end
