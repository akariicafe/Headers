@class NSURL, NSString, TZVersionInfo;

@interface TZFileSystemInterface : NSObject

@property (readonly) NSURL *latestTZLinkURL;
@property (readonly) NSURL *currentZoneinfoLinkURL;
@property (readonly) NSURL *latestLinkDestinationAtStartup;
@property (retain) NSURL *temporaryDirectory;
@property (retain) NSURL *cachedTZDataLocation;
@property (retain) NSURL *latestTZDataLink;
@property (readonly) TZVersionInfo *currentVersionInfo;
@property (readonly) TZVersionInfo *latestVersionInfo;
@property (readonly) TZVersionInfo *lastInstalledVersionInfo;
@property (readonly) TZVersionInfo *systemVersionInfo;
@property (readonly) NSURL *systemICUDirectoryURL;
@property (readonly) NSURL *systemICUSchemaVersionURL;
@property (readonly) NSString *systemICUTZSchemaVersion;
@property (readonly) NSURL *dataExpansionParentURL;
@property (retain) NSURL *dataExpansionVersionDirectory;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)cacheTZLatestDestination;
- (id)obtainDestinationOfLinkAtURL:(id)a0;
- (void)resetTemporaryDirectory;

@end
