@class NSString, NSUUID, NSArray, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface CBDisplayModuleHIDiOS : CBDisplayModule <CBContainerModuleProtocol> {
    struct __IOHIDDevice { } *_hidDisplayDevice;
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_containerID;
    struct __IOHIDElement { } *_brightnessElement;
    struct __IOHIDElement { } *_durationElement;
    NSArray *_elements;
    float _minNits;
    float _maxNits;
    float _currentNits;
    float _nitsScaler;
    float _minLinearBrightness;
    NSObject<OS_dispatch_queue> *_brightnessUpdateQueue;
    unsigned long long _brighntessUpdateCounter;
    float _brightnessUpdateTarget;
    BOOL _noHID;
}

@property (readonly) unsigned long long VID;
@property (readonly) unsigned long long PID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (void)dealloc;
- (void)stop;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (id)copyPropertyForKey:(id)a0;
- (BOOL)setSlider:(float)a0;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (void)start;
- (id)copyPropertyInternalForKey:(id)a0;
- (BOOL)setNits:(float)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)copyIdentifiers;
- (float)getLinearBrightness;
- (id)initWithDevice:(unsigned int)a0 andQueue:(id)a1;
- (BOOL)getNits:(float *)a0;
- (id)newDisplayBrightnessData;
- (float)getUserBrightnessForNits:(float)a0;
- (BOOL)handleDisplayBrightnessProperty:(id)a0;
- (BOOL)handleDisplayLinearBrightnessProperty:(id)a0;
- (BOOL)setLinearBrightness:(float)a0;
- (float)getNitsForUserBrightness:(float)a0;
- (BOOL)setNits:(float)a0 withPeriod:(float)a1;

@end
