@class NSMapTable;

@interface MPCSharedListeningLiveLinkReusePool : NSObject {
    NSMapTable *_sessionIDLiveLinkMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) MPCSharedListeningLiveLinkReusePool *sharedReusePool;

- (id)init;
- (void).cxx_destruct;
- (id)liveLinkForSessionID:(id)a0;
- (void)storeLiveLink:(id)a0 forSessionID:(id)a1;

@end
