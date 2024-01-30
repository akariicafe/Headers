@interface AFSamplingUtilities : NSObject

+ (id)sampledLibraryDirectoryPath;
+ (id)deleteItemAtFilePath:(id)a0;
+ (id)sampledSubDirectoryNameFormat;
+ (id)sampledCurrentSamplingDateKey;
+ (id)createSamplingDirectory;
+ (void)deleteAllSamplingData;
+ (id)sampledPlistFileName;
+ (id)samplingDateAsString;
+ (id)timezone;
+ (id)sampledSubDirectoryPath;
+ (id)sampledCachesSubDirectoryPath;
+ (id)component;

@end
