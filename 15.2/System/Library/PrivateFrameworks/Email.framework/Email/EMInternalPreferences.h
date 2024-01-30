@class NSString, NSObject;
@protocol OS_os_log;

@interface EMInternalPreferences : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)observeChangesForPreference:(unsigned long long)a0 usingBlock:(id /* block */)a1;
+ (BOOL)_preferenceEnabled:(unsigned long long)a0;
+ (void)_registerForDefaultChanges;
+ (BOOL)_userDefaultEnabledForKey:(id)a0 defaultValue:(BOOL)a1;
+ (id)defaultForPreference:(unsigned long long)a0;
+ (BOOL)_hasUserDefaultValueForKey:(id)a0 expectedValue:(id)a1;
+ (BOOL)preferenceEnabled:(unsigned long long)a0;
+ (void)setPreference:(unsigned long long)a0 enabled:(BOOL)a1;
+ (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
+ (void)_setUserDefaultEnabled:(BOOL)a0 forKey:(id)a1;


@end
