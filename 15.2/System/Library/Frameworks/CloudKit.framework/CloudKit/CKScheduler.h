@class NSNumber, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface CKScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_group> *_xpcActivityRegisterGroup;
    NSMutableDictionary *_xpcActivitiesByCKActivityIdentifier;
    NSMutableDictionary *_handlersByCKActivityIdentifier;
}

@property (copy, nonatomic) NSNumber *fakeDeviceCount;

+ (id)activityFromXPCActivity:(id)a0;
+ (id)identifierWithImmediateInvocationForIdentifier:(id)a0;
+ (id)sharedScheduler;
+ (id)xpcActivityIdentifierForCKActivityIdentifier:(id)a0;

- (BOOL)hasPendingActivityWithActivityIdentifier:(id)a0;
- (long long)currentPriorityForActivityIdentifier:(id)a0;
- (void)getSuggestedXPCActivityCriteriaForActivity:(id)a0 completionHandler:(id /* block */)a1;
- (void)performAsyncOnQueue:(id /* block */)a0;
- (void)submitActivity:(id)a0;
- (void)unregisterActivityIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)registerActivityIdentifier:(id)a0 handler:(id /* block */)a1;
- (id)activityForActivityIdentifier:(id)a0;
- (void)cancelActivityWithIdentifier:(id)a0;
- (id)xpcActivityForActivityWithIdentifier:(id)a0;
- (void)unregisterHandlerForActivityIdentifier:(id)a0;

@end
