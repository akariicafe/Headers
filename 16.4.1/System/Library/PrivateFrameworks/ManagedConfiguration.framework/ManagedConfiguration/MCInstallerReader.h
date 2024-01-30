@interface MCInstallerReader : NSObject

+ (id)sharedReader;
+ (void)_setSystemProfileStorageDirectory:(id)a0 userProfileStorageDirectory:(id)a1;

- (id)pathsToInstalledProfilesWithFilterFlags:(int)a0;

@end
