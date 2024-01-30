@interface AVOutputDeviceFrecencyManager : NSObject

+ (double)frecencyScoreForDeviceID:(id)a0;
+ (id)_frecentsContainerPath;
+ (id)_frecentsFilePath;
+ (id)_applicationSupportPath;
+ (void)updateFrecencyListForDeviceID:(id)a0;
+ (BOOL)_migrateFrecentsFromCFPreferencesToFrecentsFilePath:(id)a0;
+ (id)_frecentsWriter;
+ (id)_frecentsReaderAfterMigrationIfNecessary;

@end
