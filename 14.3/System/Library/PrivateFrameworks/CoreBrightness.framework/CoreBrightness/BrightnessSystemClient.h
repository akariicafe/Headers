@class BrightnessSystemClientInternal, NSObject;
@protocol OS_os_log;

@interface BrightnessSystemClient : NSObject {
    BrightnessSystemClientInternal *bsci;
    NSObject<OS_os_log> *_logHandle;
    id /* block */ _displayNotificationBlock;
    id /* block */ _keyboardNotificationBlock;
    id /* block */ _propertyNotificationBlock;
}

- (void)unregisterNotificationForKeys:(id)a0 keyboardID:(unsigned long long)a1;
- (void)registerNotificationForKey:(id)a0 andDisplay:(unsigned long long)a1;
- (void)unregisterNotificationForKeys:(id)a0 andDisplay:(unsigned long long)a1;
- (id)init;
- (BOOL)setProperty:(id)a0 withKey:(id)a1 andDisplay:(unsigned long long)a2;
- (void)dealloc;
- (void)unregisterNotificationForKeys:(id)a0;
- (id)copyPropertyForKey:(id)a0;
- (void)registerDisplayNotificationCallbackBlock:(id /* block */)a0;
- (id)copyPropertyForKey:(id)a0 andDisplay:(unsigned long long)a1;
- (void)registerNotificationBlock:(id /* block */)a0 forProperties:(id)a1;
- (void)registerNotificationForKeys:(id)a0 andDisplay:(unsigned long long)a1;
- (void)registerNotificationForKeys:(id)a0;
- (void)registerNotificationBlock:(id /* block */)a0;
- (void)unregisterNotificationForKey:(id)a0;
- (void)unregisterKeyboardNotificationBlock;
- (void)unregisterPropertyNotificationBlock;
- (void)registerKeyboardNotificationCallbackBlock:(id /* block */)a0;
- (void)registerNotificationForKeys:(id)a0 keyboardID:(unsigned long long)a1;
- (void)unregisterNotificationForKey:(id)a0 andDisplay:(unsigned long long)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (BOOL)setProperty:(id)a0 withKey:(id)a1 keyboardID:(unsigned long long)a2;
- (void)unregisterDisplayNotificationBlock;
- (void)registerNotificationForKey:(id)a0;
- (id)copyPropertyForKey:(id)a0 keyboardID:(unsigned long long)a1;
- (BOOL)isAlsSupported;

@end
