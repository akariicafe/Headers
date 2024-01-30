@interface PSSystemConfigurationDynamicStoreWifiWatcher : NSObject {
    struct __SCDynamicStore { } *_prefs;
    struct __CFString { } *_wifiKey;
    struct __CFString { } *_wifiInterface;
    struct __CFString { } *_tetheringLink;
}

+ (id)sharedInstance;
+ (BOOL)wifiEnabled;

- (id)init;
- (void)dealloc;
- (id)_wifiTetheringWithState:(id)a0;
- (id)wifiConfig;
- (void)findKeysAirPortState:(id *)a0 andTetheringState:(id *)a1;
- (id)_wifiNameWithState:(id)a0;
- (id)_wifiPowerWithState:(id)a0;

@end
