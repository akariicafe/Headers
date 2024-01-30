@class EFQueue, NSString, NSError, NSLock, NSMutableArray;

@interface _EFReplayObservable : EFObservable <EFObserver> {
    NSLock *_lock;
    BOOL _isStopped;
    NSError *_error;
    EFQueue *_queue;
    NSMutableArray *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observerDidReceiveResult:(id)a0;
- (void)observerDidComplete;
- (void).cxx_destruct;
- (id)initWithCount:(unsigned long long)a0;
- (id)subscribe:(id)a0;
- (void)observerDidFailWithError:(id)a0;
- (void)_unsubscribe:(id)a0;

@end
