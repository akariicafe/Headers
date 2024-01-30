@class NSArray, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ACDPairedDeviceAccountCache : NSObject {
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    BOOL _accountsIsValid;
    NSArray *_accounts;
    NSMutableArray *_completions;
}

@property (class, readonly) ACDPairedDeviceAccountCache *sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)accountsFromRemoteDeviceProxy:(id)a0 ignoreCache:(BOOL)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)_didFetchAccounts:(id)a0 error:(id)a1;

@end
