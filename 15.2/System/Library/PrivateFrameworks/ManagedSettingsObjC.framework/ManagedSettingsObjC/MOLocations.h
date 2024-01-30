@class NSURL;

@interface MOLocations : NSObject

@property (class, readonly) NSURL *internalSettingsPathForProcess;
@property (class, readonly) NSURL *effectiveSettingsPath;

+ (id)sharedDirectory;
+ (id)internalSettingsDirectoryForProcess;
+ (id)effectiveSettingsDirectory;

@end
