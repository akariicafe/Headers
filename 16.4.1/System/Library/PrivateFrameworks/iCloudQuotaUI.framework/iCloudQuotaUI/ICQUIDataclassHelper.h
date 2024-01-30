@interface ICQUIDataclassHelper : NSObject

+ (BOOL)_isPhotosDataclass:(id)a0;
+ (id)dataclassesToEnableForAccount:(id)a0 excludedApps:(id)a1;
+ (id)footerTextForSyncWithiCloudSpecifiersFromDataclasses:(id)a0 forAccount:(id)a1;
+ (id)iconForDataclass:(id)a0;
+ (id)localizedTextForDataclass:(id)a0;
+ (id)unsyncedDataclassesExcludingPhotosForAccount:(id)a0;

@end
