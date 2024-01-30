@class NSMutableDictionary;

@interface MEExtensionUserPreferences : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *extensionIDToUserEnabledMap;

+ (id)sharedInstance;
+ (id)log;

- (id)_serializedData;
- (void).cxx_destruct;
- (id)_plistURL;
- (id)_loadUserPreferences;
- (id)_prefsDictionary;
- (void)_savePreferences;
- (BOOL)isExtensionEnabled:(id)a0;
- (void)setExtensionEnabled:(BOOL)a0 forExtensionID:(id)a1;

@end
