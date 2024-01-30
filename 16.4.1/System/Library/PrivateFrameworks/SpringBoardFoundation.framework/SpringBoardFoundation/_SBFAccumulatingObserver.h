@class NSString, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface _SBFAccumulatingObserver : NSObject <SBFObserver> {
    NSMutableArray *_results;
    NSError *_error;
    BOOL _didComplete;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)a0;
- (void)observerDidFailWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)waitForResults:(id *)a0;

@end
