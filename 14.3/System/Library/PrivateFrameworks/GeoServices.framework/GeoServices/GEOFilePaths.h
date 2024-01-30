@class NSString, NSURL;

@interface GEOFilePaths : NSObject

@property (class, readonly) NSString *homeDirectory;
@property (class, readonly) NSString *preferencesDirectoryPath;
@property (class, readonly) NSString *geodCacheDirectoryPath;
@property (class, readonly) NSString *geoServicesCacheDirectoryPath;
@property (class, readonly) NSString *phoneNumberMUIDMappingFilePath;
@property (class, readonly) NSString *placeDataCacheDirectoryPath;
@property (class, readonly) NSString *tileCacheDirectoryPath;
@property (class, readonly) NSString *requestCountsDBFilePath;
@property (class, readonly) NSString *locationShifterDBFilePath;
@property (class, readonly) NSString *analyticsUploadDirectoryPath;
@property (class, readonly) NSString *mapsSuggestionsCacheDirectoryPath;
@property (class, readonly) NSString *aleStringsCacheDirectoryPath;
@property (class, readonly) NSString *pdPlaceCacheFilePath;
@property (class, readonly) NSString *analtyicsPipelineFilePath;
@property (class, readonly) NSURL *imageServiceDBFileURL;
@property (class, readonly) NSURL *geodLibraryDirectoryURL;
@property (class, nonatomic) BOOL allowOverrideByTests;

+ (void)initialize;

@end
