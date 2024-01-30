@class CNObservableContractEnforcement, NSArray, NSString, CNVirtualScheduler, NSMutableArray;

@interface CNTestableObserver : NSObject <CNObserver> {
    CNVirtualScheduler *_scheduler;
    CNObservableContractEnforcement *_enforcement;
}

@property (readonly) NSMutableArray *results;
@property (readonly) NSArray *resultValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)observerWithScheduler:(id)a0;

- (void).cxx_destruct;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)a0;
- (void)observerDidReceiveResult:(id)a0;
- (id)initWithScheduler:(id)a0;

@end
