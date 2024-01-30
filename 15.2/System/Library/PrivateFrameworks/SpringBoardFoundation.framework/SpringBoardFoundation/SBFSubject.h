@class NSString, NSMutableArray;

@interface SBFSubject : SBFObservable <SBFObserver> {
    NSMutableArray *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_observers;
- (void)observerDidReceiveResult:(id)a0;
- (void)observerDidComplete;
- (void).cxx_destruct;
- (id)init;
- (id)subscribe:(id)a0;
- (void)observerDidFailWithError:(id)a0;

@end
