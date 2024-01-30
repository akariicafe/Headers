@class HIDDevice, HIDElement, NSObject;
@protocol OS_dispatch_queue;

@interface BCHIDBrtControl : BCBrtControl {
    unsigned int _hidBrightnessService;
    HIDDevice *_hidBrightnessDevice;
    HIDElement *_brightnessElement;
    HIDElement *_brightnessFadeElement;
    float _nitsScaler;
    double _nits;
    float _brightnessUpdateTarget;
    unsigned long long _brighntessUpdateCounter;
    NSObject<OS_dispatch_queue> *_brightnessUpdateQueue;
    struct IONotificationPort { } *_boostFactorNotificationPort;
    unsigned int _boostFactorNotification;
    float _nitsBoostFactor;
}

@property (readonly) unsigned long long registryID;

+ (id)newMonitorWithHandler:(id /* block */)a0 error:(id *)a1;
+ (id)copyAvailableControls;

- (id)initWithService:(unsigned int)a0;
- (id)copyProperty:(id)a0 error:(id *)a1;
- (id)init;
- (void)dealloc;
- (id)copyModuleIdentifier;
- (BOOL)setNits:(double)a0 error:(id *)a1;
- (double)getNitsWithError:(id *)a0;
- (BOOL)setProperty:(id)a0 value:(id)a1 error:(id *)a2;
- (void)setDisplayService:(unsigned int)a0;
- (BOOL)_getDeviceNits:(double *)a0;
- (void)removeDisplayService;
- (BOOL)_setDeviceNits:(double)a0;
- (float)boostFactorFromIOFixed:(int)a0;
- (void)setBoostFactor:(float)a0;
- (void)addDisplayService:(unsigned int)a0;
- (void)refreshBoostFactor;

@end
