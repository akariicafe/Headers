@class NSString, NSMutableArray, NSError;

@interface _EFManualObservable : EFObservable <EFObserver> {
    NSMutableArray *_observers;
    NSError *_failureError;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _didCompleteOrFail;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observerDidReceiveResult:(id)a0;
- (void)observerDidComplete;
- (void)_removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_addObserver:(id)a0 failureError:(id *)a1;
- (id)subscribe:(id)a0;
- (void)observerDidFailWithError:(id)a0;

@end
