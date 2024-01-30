@interface SSRVoiceProfileStorePrefs : NSObject

+ (id)sharedStorePrefs;

- (long long)getVoiceProfileStoreVersion;
- (id)loadKnownUserVoiceProfiles;
- (void)setVoiceProfileStoreVersion:(unsigned long long)a0;
- (void)saveKnownUserVoiceProfiles:(id)a0;

@end
