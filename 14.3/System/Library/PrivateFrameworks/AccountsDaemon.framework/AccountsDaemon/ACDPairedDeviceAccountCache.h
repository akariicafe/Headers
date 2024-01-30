@class NSArray, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ACDPairedDeviceAccountCache : NSObject {
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    BOOL _accountsIsValid;
    NSArray *_accounts;
    NSMutableArray *_completions;
}

@property (class, readonly) ACDPairedDeviceAccountCache *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)accountsFromRemoteDeviceProxy:(id)a0 completion:(id /* block */)a1;
- (void)_didFetchAccounts:(id)a0 error:(id)a1;

@end
