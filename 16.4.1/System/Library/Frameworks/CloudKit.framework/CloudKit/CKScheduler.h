@class NSNumber, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface CKScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_group> *_xpcActivityRegisterGroup;
    NSMutableDictionary *_handlersByCKActivityIdentifier;
}

@property (readonly, nonatomic) NSMutableDictionary *xpcActivitiesByCKActivityIdentifier;
@property (copy) NSNumber *fakeDeviceCount;

+ (id)identifierWithImmediateInvocationForIdentifier:(id)a0;
+ (id)sharedScheduler;
+ (id)xpcActivityIdentifierForCKActivityIdentifier:(id)a0;
+ (id)activityFromXPCActivity:(id)a0;

- (long long)currentPriorityForActivityIdentifier:(id)a0;
- (id)activityForActivityIdentifier:(id)a0;
- (void)unregisterActivityIdentifier:(id)a0;
- (BOOL)hasPendingActivityWithActivityIdentifier:(id)a0;
- (id)_init;
- (void)unregisterHandlerForActivityIdentifier:(id)a0;
- (BOOL)isXPCActivityPending:(id)a0;
- (void)cancelActivityWithIdentifier:(id)a0;
- (void)submitActivity:(id)a0;
- (void)performAsyncOnQueue:(id /* block */)a0;
- (id)init;
- (void)setXPCActivity:(id)a0 forActivityIdentifier:(id)a1;
- (void)registerActivityIdentifier:(id)a0 replaceExistingHandler:(BOOL)a1 handler:(id /* block */)a2;
- (void)getSuggestedXPCActivityCriteriaForActivity:(id)a0 completionHandler:(id /* block */)a1;
- (id)xpcActivityForActivityWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)registerActivityIdentifier:(id)a0 handler:(id /* block */)a1;

@end
