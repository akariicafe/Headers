@class _CFXPreferences;

@interface _CFXPreferencesHandle : NSObject {
    _CFXPreferences *prefs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    unsigned int overrideEUID;
}

- (id)init;
- (void)dealloc;
- (void)setEUIDOverride:(unsigned int)a0;
- (id)copyPrefs;

@end
