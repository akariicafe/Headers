@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_object;

@interface SSCoreHapticsInfo : NSObject {
    NSMutableDictionary *_SSIDToPlayerMap;
    struct queue { struct object { NSObject<OS_dispatch_object> *fObj; } fObj; } _SSIDMapQueue;
}

+ (id)instance;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)unregisterSSID:(unsigned long long)a0;
- (void)disposeSSID:(unsigned long long)a0;
- (unsigned long long)generateNewSSIDForPlayer:(id)a0;
- (id)getPlayerForSSID:(unsigned long long)a0;
- (void)registerSSID:(unsigned long long)a0 withPlayer:(id)a1;

@end
