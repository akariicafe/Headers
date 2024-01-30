@class NSURL, ICUserIdentityStore, NSObject, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface ICRadioPlaybackHistoryStore : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_identityResolutionQueue;
}

@property (readonly, copy, nonatomic) NSURL *containerDirectoryURL;
@property (readonly, nonatomic) ICUserIdentityStore *userIdentityStore;

+ (id)_defaultContainerURL;

- (void)flushWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContainerDirectoryURL:(id)a0;
- (id)initWithContainerDirectoryURL:(id)a0 identityStore:(id)a1;
- (id)_playbackHistoryOfClass:(Class)a0 forStationWithIdentifier:(id)a1 identityKey:(id)a2 error:(id *)a3;
- (void)_getCacheKeyForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (id)_fileURLForStationWithIdentifier:(id)a0 identityKey:(id)a1;
- (void)updateHistoryForStationWithIdentifier:(id)a0 userIdentity:(id)a1 usingBlock:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)initWithIdentityStore:(id)a0;
- (void)getHistoryForStationWithIdentifier:(id)a0 userIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeHistoryForStationWithIdentifier:(id)a0 userIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateHistoryForStationWithIdentifier:(id)a0 userIdentity:(id)a1 usingBlock:(id /* block */)a2;

@end
