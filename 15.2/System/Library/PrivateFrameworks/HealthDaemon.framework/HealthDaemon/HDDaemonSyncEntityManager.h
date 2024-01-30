@class NSArray, NSDictionary, HDDaemon;

@interface HDDaemonSyncEntityManager : NSObject {
    HDDaemon *_daemon;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_lock_allOrderedSyncEntities;
    NSDictionary *_lock_allSyncEntitiesByIdentifier;
}

@property (readonly, copy, nonatomic) NSArray *orderedSyncEntities;
@property (readonly, copy, nonatomic) NSDictionary *syncEntitiesByIdentifier;

- (id)initWithDaemon:(id)a0;
- (void).cxx_destruct;

@end
