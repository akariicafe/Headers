@class NSString, NSMutableArray;

@interface SBFSubject : SBFObservable <SBFObserver> {
    NSMutableArray *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_observers;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)a0;
- (void)observerDidReceiveResult:(id)a0;

@end
