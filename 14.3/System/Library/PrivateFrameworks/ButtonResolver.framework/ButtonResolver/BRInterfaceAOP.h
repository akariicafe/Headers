@class NSString, HAButtonHapticsLoader, NSMutableIndexSet, NSMutableDictionary, NSMutableArray;

@interface BRInterfaceAOP : BRInterface {
    struct IONotificationPort { } *_notificationPort;
    unsigned int _arrivalNotification;
    id /* block */ _notificationBlock;
    NSString *_notificationName;
    HAButtonHapticsLoader *_loader;
    NSMutableIndexSet *_freeSlots;
    NSMutableArray *_slotArray;
    NSMutableDictionary *_stateDict;
    BOOL _isReady;
    unsigned long long _maxAssetSlots;
}

@property (nonatomic) unsigned int service;
@property (nonatomic) unsigned int connect;
@property (readonly, nonatomic) BOOL fastHaptics;

+ (id)interface;
+ (int)_convertForceFeel:(unsigned long long)a0;
+ (int)_convertClickState:(unsigned long long)a0;

- (BOOL)isReady;
- (id)propertyList;
- (id)init;
- (void)dealloc;
- (void)scheduleReadyNotificationWithBlock:(id /* block */)a0;
- (BOOL)enableStates:(id)a0 error:(id *)a1;
- (BOOL)disableStates:(id)a0 clearAsset:(BOOL)a1 error:(id *)a2;
- (id)description;
- (BOOL)setGlobalConfigs:(id)a0 error:(id *)a1;
- (BOOL)setConfigs:(id)a0 withAssets:(id)a1 forStates:(id)a2 error:(id *)a3;
- (BOOL)playState:(unsigned long long)a0 forSpeed:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)unusedAssetSlots;
- (unsigned long long)maxAssetSlots;
- (void)_findService;
- (id)initWithFastHaptics:(BOOL)a0;
- (void)_receiveLoaderAvailableNotification:(id)a0;
- (BOOL)_setGlobalAOPConfigsFromBRFConfigs:(id)a0;
- (id)dataForSlot:(id)a0 fromArray:(id)a1;
- (BOOL)_setStateAOPConfigsFromStateData:(id)a0 andSlotData:(id)a1;
- (void)mergeStateChanges:(id)a0 into:(id)a1;
- (BOOL)_setDefaultAOPConfigs;
- (BOOL)updateReadyState;
- (BOOL)_serviceSetProperty:(void *)a0 forKey:(struct __CFString { } *)a1;

@end
