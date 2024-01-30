@class NSString, NSMutableArray;

@interface SBFSubject : SBFObservable <SBFObserver> {
    NSMutableArray *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)a0;
- (id)_observers;
- (id)subscribe:(id)a0;
- (void)observerDidFailWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
