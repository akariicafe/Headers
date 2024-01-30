@class NSString, NSMutableDictionary;

@interface CalMockPreferenceStore : NSObject <CalPreferencesStore> {
    NSMutableDictionary *_keys;
    NSMutableDictionary *_values;
    NSString *_path;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)decodeKeysDictionary:(id)a0;
+ (id)encodeKeysDictionary:(id)a0;
+ (id)inMemoryStore;
+ (id)preferencesStoreForPath:(id)a0;
+ (id)storagePathForDirectory:(id)a0;

- (id)initWithPath:(id)a0;
- (void)setValue:(id)a0 forDomain:(id)a1 key:(id)a2;
- (BOOL)getBoolean:(BOOL *)a0 forDomain:(id)a1 key:(id)a2;
- (BOOL)getValue:(id *)a0 forDomain:(id)a1 key:(id)a2;
- (void)synchronizeDomain:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)getInteger:(long long *)a0 forDomain:(id)a1 key:(id)a2;
- (BOOL)_getValue:(id *)a0 forDomain:(id)a1 key:(id)a2;
- (void)_setValue:(id)a0 forDomain:(id)a1 key:(id)a2;

@end
