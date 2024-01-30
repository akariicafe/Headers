@class HMFUnfairLock, NSMutableArray;

@interface HMPendingRequests : NSObject {
    HMFUnfairLock *_lock;
}

@property (retain, nonatomic) NSMutableArray *contextLists;

- (void)addProgressHandler:(id)a0 forAccessoryIdentifier:(id)a1;
- (id)init;
- (void)addAccessoryDescription:(id)a0 progressBlock:(id)a1 andCompletionBlock:(id)a2 forIdentifier:(id)a3;
- (void).cxx_destruct;
- (id)removeEventForIdentifier:(id)a0;
- (void)addApplicationData:(id)a0 andCompletionBlock:(id)a1 forIdentifier:(id)a2;
- (id)retrieveCompletionBlockForIdentifier:(id)a0;
- (id)removeEventsForIdentifier:(id)a0;
- (void)addTrigger:(id)a0 andCompletionBlock:(id)a1 forIdentifier:(id)a2;
- (void)addEvents:(id)a0 andCompletionBlock:(id)a1 forIdentifier:(id)a2;
- (id)removeMediaSystemBuilderForIdentifier:(id)a0;
- (id)removeApplicationDataForIdentifier:(id)a0;
- (id)removeRequestOfType:(long long)a0 forIdentifier:(id)a1;
- (id)removeAccessoryForIdentifier:(id)a0;
- (id)retrieveProgressBlockForIdentifier:(id)a0;
- (id)_retrieveRequestOfType:(long long)a0 forIdentifier:(id)a1 remove:(BOOL)a2;
- (id)retrieveAccessoryDescriptionForIdentifier:(id)a0;
- (void)addAccessory:(id)a0 andCompletionBlock:(id)a1 forIdentifier:(id)a2;
- (id)removeProgressBlockForIdentifier:(id)a0;
- (void)addEvent:(id)a0 andCompletionBlock:(id)a1 forIdentifier:(id)a2;
- (void)addRequest:(id)a0 ofType:(long long)a1 forIdentifier:(id)a2;
- (void)addCompletionBlock:(id)a0 forIdentifier:(id)a1;
- (void)addAction:(id)a0 andCompletionBlock:(id)a1 forIdentifier:(id)a2;
- (void)_addRequest:(id)a0 ofType:(long long)a1 forIdentifier:(id)a2;
- (id)removeActionForIdentifier:(id)a0;
- (id)removeAccessoryDescriptionForIdentifier:(id)a0;
- (id)retrieveRequestOfType:(long long)a0 forIdentifier:(id)a1;
- (id)removeTriggerForIdentifier:(id)a0;
- (void)addMediaSystemBuilder:(id)a0 andCompletionBlock:(id)a1 forIdentifier:(id)a2;
- (id)removeCompletionBlockForIdentifier:(id)a0;

@end
