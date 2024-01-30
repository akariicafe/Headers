@class BrightnessSystemClientInternal, NSObject;
@protocol OS_os_log;

@interface BrightnessSystemClient : NSObject {
    BrightnessSystemClientInternal *bsci;
    NSObject<OS_os_log> *_logHandle;
    id /* block */ _displayNotificationBlock;
    id /* block */ _keyboardNotificationBlock;
    id /* block */ _propertyNotificationBlock;
}

- (void)registerNotificationBlock:(id /* block */)a0;
- (void)registerNotificationBlock:(id /* block */)a0 forProperties:(id)a1;
- (id)copyPropertyForKey:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (BOOL)isAlsSupported;
- (id)init;
- (void)dealloc;
- (void)unregisterKeyboardNotificationBlock;
- (void)unregisterDisplayNotificationBlock;
- (void)unregisterPropertyNotificationBlock;
- (BOOL)setProperty:(id)a0 withKey:(id)a1 andDisplay:(unsigned long long)a2;
- (id)copyPropertyForKey:(id)a0 andDisplay:(unsigned long long)a1;
- (void)registerDisplayNotificationCallbackBlock:(id /* block */)a0;
- (void)registerNotificationForKey:(id)a0;
- (void)unregisterNotificationForKey:(id)a0;
- (void)registerNotificationForKeys:(id)a0;
- (void)unregisterNotificationForKeys:(id)a0;
- (void)registerNotificationForKeys:(id)a0 andDisplay:(unsigned long long)a1;
- (void)unregisterNotificationForKeys:(id)a0 andDisplay:(unsigned long long)a1;
- (void)registerNotificationForKey:(id)a0 andDisplay:(unsigned long long)a1;
- (void)unregisterNotificationForKey:(id)a0 andDisplay:(unsigned long long)a1;
- (BOOL)setProperty:(id)a0 withKey:(id)a1 keyboardID:(unsigned long long)a2;
- (id)copyPropertyForKey:(id)a0 keyboardID:(unsigned long long)a1;
- (void)registerKeyboardNotificationCallbackBlock:(id /* block */)a0;
- (void)registerNotificationForKeys:(id)a0 keyboardID:(unsigned long long)a1;
- (void)unregisterNotificationForKeys:(id)a0 keyboardID:(unsigned long long)a1;

@end
