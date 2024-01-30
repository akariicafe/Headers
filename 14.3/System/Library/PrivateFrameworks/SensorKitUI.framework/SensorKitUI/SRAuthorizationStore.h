@class NSDictionary, NSObject, NSHashTable;
@protocol OS_dispatch_queue, SRTCCStore;

@interface SRAuthorizationStore : NSObject {
    int _notifyToken;
    BOOL _sensorKitActive;
    NSDictionary *_authorizationValues;
    NSDictionary *_lastModifiedAuthorizationTimes;
    NSHashTable *_delegates;
    id<SRTCCStore> _tccStore;
    NSObject<OS_dispatch_queue> *_updateQueue;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;

@end
