@class NSOperationQueue, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BUUserAccountMonitor : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (retain, nonatomic) NSMutableDictionary *notifyBlocks;
@property (retain, nonatomic) NSMutableDictionary *observerHashTables;
@property (retain, nonatomic) NSMutableDictionary *accountIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *notificationTokens;
@property (retain, nonatomic) NSOperationQueue *notificationHandlerQueue;
@property (readonly, nonatomic) id /* block */ notificationHandlerBlock;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)nq_updateiCloudAccountIdentifierAndNotifyObservers;
- (unsigned long long)_singleAccountTypeForNotification:(id)a0;
- (void)nq_updateiTunesAccountIdentifierAndNotifyObservers;
- (void)removeObserver:(id)a0 accountTypes:(unsigned long long)a1;
- (void)addObserver:(id)a0 accountTypes:(unsigned long long)a1;

@end
