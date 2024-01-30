@class NSString, NSMutableDictionary, NSMutableSet;

@interface IMBalloonPluginManager : NSObject

@property (class, nonatomic) BOOL isRunningPPT;

@property (retain, nonatomic) NSMutableDictionary *pluginsMap;
@property (retain, nonatomic) id extensionMatchingContext;
@property (retain, nonatomic) id highMemoryExtensionMatchingContext;
@property (retain, nonatomic) NSString *pluginMetaDataFolder;
@property (retain, nonatomic) NSMutableDictionary *pluginIDToMetadataCache;
@property (retain, nonatomic) NSMutableSet *pluginsToRemoveAfterExtensionsUpdate;
@property (nonatomic) BOOL hasCompletedInitialization;
@property (nonatomic) BOOL hasDefferedInstalledAppsChangedNotification;
@property (readonly, retain, nonatomic) Class richLinksDataSourceClass;

+ (id)sharedInstance;
+ (id)balloonProviderBundlePathURL;
+ (id)_extensionBlocklist;
+ (id)precacheBalloonAppExtensionsForExtensions:(id)a0;
+ (BOOL)_isServerBlocklistedBundleIdentifier:(id)a0 serverBag:(id)a1;
+ (BOOL)_isExtensionBlocklisted:(id)a0;
+ (BOOL)_allowExtensionWithIdentifier:(id)a0;
+ (void)disableExtensionDiscovery;
+ (void)enableAlternatePathPlugins;

- (id)balloonPluginForBundleID:(id)a0;
- (id)existingDataSourceForMessageGUID:(id)a0 bundleID:(id)a1;
- (void)insertDataSource:(id)a0 forGUID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)pluginChatItem:(id)a0 didRelenquishNonResuableController:(id)a1 contextIdentifier:(id)a2;
- (void)pluginChatItem:(id)a0 didRelinquishReusableController:(id)a1 contextIdentifier:(id)a2;
- (id)allPlugins;
- (void)setPluginEnabled:(BOOL)a0 identifier:(id)a1;
- (void)removePluginWithBundleID:(id)a0;
- (void)dealloc;
- (id)_extensionWithIdentifier:(id)a0;
- (Class)dataSourceClassForBundleID:(id)a0;
- (id)systemBundleIdentifierForPluginIdentifier:(id)a0;
- (id)dataSourceForPluginPayload:(id)a0;
- (void)_postDeferredInstalledAppsChangedNotificationIfNecessary;
- (id)_insertPluginForExtension:(id)a0 balloonProviderBundle:(id)a1 precachedBalloonAppExtensions:(id)a2 timingCollection:(id)a3;
- (void)_loadAllDataSources;
- (void)_postInstalledAppsChangedNotification;
- (id)_pluginPlistPath:(id)a0;
- (id)_infoPlistPathForPluginCreatingFolderIfNeeded:(id)a0;
- (id)_metadataForPluginIdentifier:(id)a0;
- (void)_storeMetadata:(id)a0 _forPlugin:(id)a1;
- (id)_identifiersForAppPlugins;
- (id)_pluginsForWhichWeHaveMetadata;
- (void)_deleteMetaDataForPlugins:(id)a0;
- (id)_loadAppExtensionDataSourcesForExtensionPoint:(id)a0;
- (void)_updatePluginsForExtensions:(id)a0 extensionPoint:(id)a1;
- (void)_updatePluginsForExtensions:(id)a0 extensionPoint:(id)a1 precachedBalloonAppExtensions:(id)a2;
- (void)_updatePluginsForBundles:(id)a0;
- (void)_removePluginsWithDelay;
- (id)_appProxyBundleIdentifiersForAppPlugins;
- (id)_proxyIdentifiersForPlugins;
- (id)_insertPluginForAppBundle:(id)a0 balloonProviderBundle:(id)a1;
- (void)_setPluginsToRemoveAndCallSelectorWithDelay:(id)a0;
- (void)_moveExtensionDataSourcesFromMessagesExtensionPluginToAppExtensions;
- (id)_currentlyInstalledExtensionsExcludingExtensionPoint:(id)a0;
- (void)_clearPluginMetadataForUninstalledApps;
- (void)_removePluginsForIdentifiers:(id)a0;
- (void)_findPluginsInPaths:(id)a0;
- (void)_findPluginsInPathInternal:(id)a0;
- (void)_loadAppBundleDataSources;
- (void)_loadAppExtensionDataSources;
- (id)_fallBackMessagesExtensionPluginForBundleID:(id)a0;
- (id)localParticipantIdentifierForAppID:(id)a0 conversationID:(id)a1;
- (id)recipientIDForRecipient:(id)a0 appID:(id)a1;
- (id)conversationID:(id)a0 appID:(id)a1;
- (void)loadExtensionWithIdentifierIfNeeded:(id)a0;

@end
