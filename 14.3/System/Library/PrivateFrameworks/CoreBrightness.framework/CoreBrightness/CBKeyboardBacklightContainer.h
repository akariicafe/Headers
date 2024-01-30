@class NSString, NSMutableDictionary, HIDDevice, NSObject, KeyboardBacklight;
@protocol OS_os_log;

@interface CBKeyboardBacklightContainer : CBContainer <CBContainerProtocol, CBHIDServiceProtocol, CBStatusInfoProtocol> {
    NSObject<OS_os_log> *_logHandle;
    KeyboardBacklight *_keyboardBacklight;
    BOOL _userActive;
    NSMutableDictionary *_properties;
}

@property (readonly) HIDDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0;
- (void)sendNotificationForKey:(id)a0 andValue:(id)a1;
- (BOOL)setPropertyInternal:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)stop;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)copyPropertyForKey:(id)a0;
- (BOOL)start;
- (id)copyPropertyInternalForKey:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)copyIdentifiers;
- (void)keyboardBacklightInitialization;
- (BOOL)keyboardUsesNitUnits:(id)a0;
- (id)newKeyboardBacklightWithQueue:(id)a0 device:(id)a1;

@end
