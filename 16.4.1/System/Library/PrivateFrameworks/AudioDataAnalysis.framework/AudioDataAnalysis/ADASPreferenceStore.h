@class NSDictionary, NPSDomainAccessor;

@interface ADASPreferenceStore : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _npsDomainLock;
}

@property (readonly, nonatomic) NSDictionary *keyMap;
@property (readonly, nonatomic) NSDictionary *defaultValues;
@property (readonly, nonatomic) NSDictionary *specialDarwinKeys;
@property (retain, nonatomic) NPSDomainAccessor *coreAudioDomain;
@property (retain, nonatomic) NPSDomainAccessor *coreAudioDeviceDomain;

+ (id)sharedInstance;

- (void)pairedDeviceStateChanged:(id)a0;
- (void)initNPSDomain;
- (void)registerForNotifications;
- (id)init;
- (void).cxx_destruct;

@end
