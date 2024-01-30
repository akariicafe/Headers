@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface RBPersonaManager : NSObject {
    long long _personalID;
    NSMutableDictionary *_cachedPersonaIdentifiers;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

- (id)init;
- (void).cxx_destruct;

@end
