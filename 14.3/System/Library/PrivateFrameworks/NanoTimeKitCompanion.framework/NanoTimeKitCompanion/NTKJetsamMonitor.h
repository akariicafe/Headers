@class NTKJetsamInfoFetcher, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NTKJetsamMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_monitorQ;
    NSObject<OS_dispatch_source> *_monitorTimer;
    int _transactionCount;
    NTKJetsamInfoFetcher *_fetcher;
}

+ (id)sharedJetsamMonitor;

- (id)init;
- (void).cxx_destruct;
- (void)incrementTransactionCount;
- (void)decrementTransactionCount;

@end
