@class NSMapTable;

@interface _CDObservationCenter : NSObject {
    NSMapTable *_senderToNotificationObservers;
    NSMapTable *_senderToNotificationObserverObservers;
}

+ (id)sharedInstance;

- (void)removeObserverChangesObserver:(id)a0 onName:(id)a1;
- (void)addObserver:(id)a0 name:(id)a1 sender:(id)a2 queue:(id)a3 usingBlock:(id /* block */)a4;
- (void)addObserverChangesObserver:(id)a0 onName:(id)a1 queue:(id)a2 usingBlock:(id /* block */)a3;
- (void)postNotificationName:(id)a0 userInfo:(id)a1 sender:(id)a2;
- (void)removeObserver:(id)a0 name:(id)a1;
- (void)addObserverChangesObserver:(id)a0 onName:(id)a1 queue:(id)a2 usingSelector:(SEL)a3;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0 name:(id)a1 sender:(id)a2 queue:(id)a3 usingSelector:(SEL)a4;
- (id)init;
- (void)removeObserver:(id)a0 name:(id)a1 sender:(id)a2;
- (void).cxx_destruct;
- (unsigned long long)observerCountOnName:(id)a0;

@end
