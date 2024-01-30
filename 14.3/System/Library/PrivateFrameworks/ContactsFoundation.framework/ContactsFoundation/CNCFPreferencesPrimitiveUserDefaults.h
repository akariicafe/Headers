@class NSString;

@interface CNCFPreferencesPrimitiveUserDefaults : NSObject <CNPrimitiveUserDefaults> {
    NSString *_applicationID;
    long long _autosyncTimerIsActive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)primitiveRemoveObjectForKey:(id)a0;
- (id)initWithApplicationID:(id)a0;
- (long long)primitiveIntegerValueForKey:(id)a0 keyExists:(BOOL *)a1;
- (BOOL)synchronize;
- (void)setupAutosync;
- (struct __CFString { } *)CFApplicationID;
- (void)setPrimitiveObject:(id)a0 forKey:(id)a1;
- (BOOL)primitiveBoolValueForKey:(id)a0 keyExists:(BOOL *)a1;
- (id)primitiveObjectForKey:(id)a0;

@end
