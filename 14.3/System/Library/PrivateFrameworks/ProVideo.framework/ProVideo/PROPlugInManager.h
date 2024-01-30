@interface PROPlugInManager : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedPlugInManager;

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
- (BOOL)checkPluginVersionAgainstBlockList:(id)a0 blockDict:(id)a1;
- (void)scanForPlugInsInDirectory:(id)a0;
- (BOOL)requiresProtocolsToBePresentWhenLoading;
- (void)setRequiresProtocolsToBePresentWhenLoading:(BOOL)a0;
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
- (void)unregisterAPIForProtocol:(id)a0 version:(unsigned int)a1;
- (id)loadBlockPluginList:(struct __CFString { } *)a0;

@end
