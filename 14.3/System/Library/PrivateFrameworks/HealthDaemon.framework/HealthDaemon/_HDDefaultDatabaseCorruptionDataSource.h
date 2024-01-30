@class NSString, HDProfile;

@interface _HDDefaultDatabaseCorruptionDataSource : NSObject <HDDatabaseCorruptionTTRPromptDataSource> {
    HDProfile *_profile;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)currentOSBuild;
- (BOOL)isTestingDevice;
- (BOOL)isAppleInternalInstall;
- (id)profileIdentifier;
- (void)persistObject:(id)a0 forKey:(id)a1;
- (id)currentDatabaseIdentifier;
- (id)persistedStringForKey:(id)a0;
- (id)persistedDictionaryForKey:(id)a0;

@end
