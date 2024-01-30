@class NSRecursiveLock, NSString, NSMutableDictionary, PROReadWriteLock, NSMutableArray;

@interface PROConcretePlugInManager : PROPlugInManager <PROVersionedAPIAccess, PROBundleHandlerDelegate> {
    NSMutableDictionary *protocols;
    NSMutableDictionary *groupsDictionary;
    NSMutableDictionary *bundlesDictionary;
    NSMutableDictionary *uuids;
    NSMutableDictionary *classesDictionary;
    NSMutableArray *plugIns;
    NSMutableDictionary *api;
    PROReadWriteLock *apiLock;
    NSMutableArray *plugInSearchDirectories;
    NSMutableDictionary *blockedLibraryPlugins;
    NSMutableDictionary *blockedDocumentPlugins;
    id delegate;
    struct { unsigned char respondsToDidError : 1; unsigned char respondsToDidPlugInDidError : 1; unsigned char respondsToShouldLoadBundle : 1; unsigned char respondsToShouldLoadPlugIn : 1; unsigned char respondsToDidLoadPlugIn : 1; unsigned char useStrictLoading : 1; } managerFlags;
    NSRecursiveLock *mutex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)reportError:(id)a0;
- (void)setDelegate:(id)a0;
- (id)plugIns;
- (id)delegate;
- (void)registerAPIObject:(id)a0 forProtocol:(id)a1 version:(unsigned int)a2;
- (void)scanForPlugInsInBundle:(id)a0;
- (void)setPlugInSearchDirectories:(id)a0;
- (void)scanForPlugIns;
- (id)plugInsForProtocol:(id)a0;
- (id)plugInsForProtocols:(id)a0;
- (void)unregisterAPIForProtocol:(id)a0;
- (void)addPlugInSearchDirectory:(id)a0;
- (id)newBlockPluginList:(struct __CFString { } *)a0;
- (BOOL)checkPluginVersionAgainstBlockList:(id)a0 blockDict:(id)a1;
- (void)addPlugIn:(id)a0;
- (void)mergeGroupsDictionaryWith:(id)a0;
- (void)finishPluginSetupForBundle:(id)a0 handler:(id)a1;
- (void)scanForPlugInsInDirectory:(id)a0;
- (BOOL)shouldLoadBundle:(id)a0;
- (void)scanForPlugInsInBundleHelper:(id)a0 zone:(struct _NSZone { } *)a1 withPluginKitPlugIn:(id)a2;
- (BOOL)shouldLoadPlugIn:(id)a0;
- (BOOL)requiresProtocolsToBePresentWhenLoading;
- (id)apiForProtocol:(id *)a0 versions:(id)a1;
- (BOOL)validateProtocols:(id)a0;
- (BOOL)bundleHandler:(id)a0 shouldAddPlugIn:(id)a1;
- (void)bundleHandler:(id)a0 didAddPlugIn:(id)a1;
- (void)bundleHandler:(id)a0 didError:(id)a1;
- (void)setRequiresProtocolsToBePresentWhenLoading:(BOOL)a0;
- (void)insertObject:(id)a0 inPlugInSearchDirectoriesAtIndex:(unsigned int)a1;
- (void)removeObjectFromPlugInSearchDirectoriesAtIndex:(unsigned int)a0;
- (id)plugInSearchDirectories;
- (void)removeAllPlugIns;
- (void)addLibraryBlockedPlugin:(id)a0 bundleName:(id)a1 pluginName:(id)a2 version:(id)a3;
- (void)addDocumentBlockedPlugin:(id)a0;
- (BOOL)checkIfShouldBlockPlugin:(id)a0 returnPluginDictionary:(id *)a1;
- (void)getNameOverrides:(id)a0 pluginName:(id *)a1 bundleName:(id *)a2;
- (void)removeAllBlockedDocumentPlugins;
- (void)scanForPlugInsInBundle:(id)a0 withPluginKitPlugIn:(id)a1;
- (id)plugInGroups;
- (id)plugInGroupsMutable;
- (id)plugInWithUUID:(struct __CFUUID { } *)a0;
- (id)plugInWithClassName:(id)a0;
- (id)plugInGroupWithUUID:(struct __CFUUID { } *)a0;
- (id)blockedLibraryPlugins;
- (id)blockedDocumentPlugins;
- (unsigned int)countOfBundles;
- (id)objectInBundlesAtIndex:(unsigned int)a0;
- (void)unregisterAPIForProtocol:(id)a0 version:(unsigned int)a1;

@end
