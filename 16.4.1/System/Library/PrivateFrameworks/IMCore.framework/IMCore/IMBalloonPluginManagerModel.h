@class NSString, NSDictionary, NSSet, NSObject, IMThreadSafeBalloonPluginMap;
@protocol OS_dispatch_queue;

@interface IMBalloonPluginManagerModel : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dataQueue;
@property (readonly, nonatomic) IMThreadSafeBalloonPluginMap *pluginsMap;
@property (retain, nonatomic) id extensionMatchingContext;
@property (retain, nonatomic) id highMemoryExtensionMatchingContext;
@property (retain, nonatomic) NSString *pluginMetaDataFolder;
@property (retain, nonatomic) NSDictionary *pluginIDToMetadataCache;
@property (retain, nonatomic) NSSet *pluginsToRemoveAfterExtensionsUpdate;
@property (nonatomic) BOOL hasCompletedInitialization;
@property (nonatomic) BOOL hasDeferredInstalledAppsChangedNotification;

- (id)init;
- (void).cxx_destruct;

@end
