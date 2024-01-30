@interface AVOutputDeviceFrecencyManager : NSObject

+ (id)_applicationSupportPath;
+ (void)updateFrecencyListForDeviceID:(id)a0;
+ (id)_frecentsWriter;
+ (double)frecencyScoreForDeviceID:(id)a0;
+ (id)_frecentsReaderAfterMigrationIfNecessary;
+ (id)_frecentsContainerPath;
+ (id)_frecentsFilePath;
+ (BOOL)_migrateFrecentsFromCFPreferencesToFrecentsFilePath:(id)a0;

@end
