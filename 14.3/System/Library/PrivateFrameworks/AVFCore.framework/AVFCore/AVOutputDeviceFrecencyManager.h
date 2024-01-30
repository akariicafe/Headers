@interface AVOutputDeviceFrecencyManager : NSObject

+ (BOOL)_migrateFrecentsFromCFPreferencesToFrecentsFilePath:(id)a0;
+ (double)frecencyScoreForDeviceID:(id)a0;
+ (id)_frecentsFilePath;
+ (id)_frecentsWriter;
+ (void)updateFrecencyListForDeviceID:(id)a0;
+ (id)_applicationSupportPath;
+ (id)_frecentsReaderAfterMigrationIfNecessary;
+ (id)_frecentsContainerPath;

@end
