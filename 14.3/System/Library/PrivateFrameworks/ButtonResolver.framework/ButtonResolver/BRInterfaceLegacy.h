@class NSMutableArray;

@interface BRInterfaceLegacy : BRInterface {
    BOOL _isReady;
    struct __IOHIDEventSystemClient { } *_client;
    NSMutableArray *_services;
    id /* block */ _block;
    unsigned long long _doublePressTimeoutUs;
    unsigned long long _triplePressTimeoutUs;
    unsigned long long _doubleTapTimeoutUs;
    unsigned long long _tripleTapTimeoutUs;
    unsigned long long _longPressTimeoutUs;
    unsigned long long _maxAssetSlots;
    unsigned long long _unusedAssetSlots;
}

@property (nonatomic) BOOL tapOnly;

+ (id)interface;
+ (BOOL)_isTapState:(unsigned long long)a0;

- (BOOL)isReady;
- (id)propertyList;
- (id)init;
- (BOOL)_enableState:(unsigned long long)a0;
- (BOOL)_setDefaultServicePropertiesOnService:(struct __IOHIDServiceClient { } *)a0;
- (void)dealloc;
- (void)scheduleReadyNotificationWithBlock:(id /* block */)a0;
- (void)_findServices;
- (BOOL)enableStates:(id)a0 error:(id *)a1;
- (BOOL)disableStates:(id)a0 clearAsset:(BOOL)a1 error:(id *)a2;
- (id)description;
- (BOOL)setGlobalConfigs:(id)a0 error:(id *)a1;
- (BOOL)setConfigs:(id)a0 withAssets:(id)a1 forStates:(id)a2 error:(id *)a3;
- (void)serviceAddedHandler:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)_disableState:(unsigned long long)a0;
- (unsigned long long)unusedAssetSlots;
- (BOOL)_servicesSetProperty:(void *)a0 forKey:(struct __CFString { } *)a1;
- (BOOL)_setConfig:(id)a0 forState:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)maxAssetSlots;

@end
