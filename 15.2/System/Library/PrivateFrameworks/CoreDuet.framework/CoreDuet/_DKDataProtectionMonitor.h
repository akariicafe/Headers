@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _DKDataProtectionMonitor : NSObject {
    NSMutableDictionary *_handlers;
    BOOL _deviceFormatedForContentProtection;
    NSMutableDictionary *_availableState;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    int _notifyToken;
    BOOL _notifyEnabled;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
