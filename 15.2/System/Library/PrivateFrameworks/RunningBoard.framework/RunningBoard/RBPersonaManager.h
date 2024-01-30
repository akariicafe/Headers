@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface RBPersonaManager : NSObject {
    long long _personalID;
    NSCache *_cachedPersonaIdentifiers;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

- (void).cxx_destruct;
- (id)init;

@end
