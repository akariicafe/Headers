@class NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface CKRecordObserverManager : NSObject <CKRecordObservable> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_recordObservers;
}

@property (class, readonly) CKRecordObserverManager *sharedManager;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeRecordObserver:(id)a0;
- (void)handleRecordChange:(id)a0 container:(id)a1 completionHandler:(id /* block */)a2;
- (void)addRecordObserver:(id)a0 block:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
