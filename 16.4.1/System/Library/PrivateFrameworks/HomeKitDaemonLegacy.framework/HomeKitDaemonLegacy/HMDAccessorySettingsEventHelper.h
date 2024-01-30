@class NSDictionary, NSArray;

@interface HMDAccessorySettingsEventHelper : NSObject {
    NSDictionary *_keyPathMap;
    NSArray *_keyPaths;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithKeyPathMap:(id)a0 keyPathList:(id)a1;
- (id)allTopicsForHome:(id)a0 accessory:(id)a1;
- (unsigned long long)remoteDeviceAccessControlForTopic:(id)a0;
- (BOOL)remoteEventAllowedForKeyPath:(id)a0 deviceType:(unsigned long long)a1 userType:(unsigned long long)a2;
- (unsigned long long)remoteUserAccessControlForTopic:(id)a0;

@end
