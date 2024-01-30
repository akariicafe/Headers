@class NSURL;

@interface MOLocations : NSObject

@property (class, readonly) NSURL *internalSettingsPathForProcess;
@property (class, readonly) NSURL *internalSettingsDirectoryForProcess;
@property (class, readonly) NSURL *effectiveSettingsPath;

+ (id)effectiveSettingsDirectory;
+ (id)sharedDirectory;

@end
