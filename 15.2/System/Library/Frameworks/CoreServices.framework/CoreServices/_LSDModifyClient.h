@class NSString;

@interface _LSDModifyClient : _LSDClient <_LSDModifyProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateRecordForApp:(id)a0 withSINF:(id)a1 iTunesMetadata:(id)a2 placeholderMetadata:(id)a3 sendNotification:(int)a4 completionHandler:(id /* block */)a5;
- (void)relaxApplicationTypeRequirements:(BOOL)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)registerItemInfo:(id)a0 alias:(id)a1 diskImageAlias:(id)a2 bundleURL:(id)a3 installationPlist:(id)a4 completionHandler:(id /* block */)a5;
- (void)setUpdateAvailabilities:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerExtensionPoint:(id)a0 platform:(unsigned int)a1 declaringURL:(id)a2 withInfo:(id)a3 completionHandler:(id /* block */)a4;
- (void)rebuildApplicationDatabasesForSystem:(BOOL)a0 internal:(BOOL)a1 user:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)setPreferenceValueForCallingApplication:(id)a0 forKey:(id)a1 completionHandler:(id /* block */)a2;
- (void)garbageCollectDatabaseWithCompletionHandler:(id /* block */)a0;
- (void)refreshContentInFrameworkAtURL:(id)a0 reply:(id /* block */)a1;
- (void)performUninstallCall:(id)a0 withOptions:(id)a1 uninstallType:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)setPreferenceValue:(id)a0 forKey:(id)a1 forApplicationAtURL:(id)a2 completionHandler:(id /* block */)a3;
- (void)uninstallApplication:(id)a0 withOptions:(id)a1 uninstallType:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)unregisterExtensionPoint:(id)a0 platform:(unsigned int)a1 withVersion:(id)a2 completionHandler:(id /* block */)a3;
- (void)performInstallCall:(id)a0 withOptions:(id)a1 installType:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)setHandler:(id)a0 version:(struct LSVersionNumber { unsigned char x0[32]; })a1 roles:(unsigned int)a2 forContentType:(id)a3 completionHandler:(id /* block */)a4;
- (void)unregisterBundleUnit:(unsigned int)a0 options:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (void)removeAllHandlersWithCompletionHandler:(id /* block */)a0;
- (void)removeAllHandlerPrefsForBundleID:(id)a0 completionHandler:(id /* block */)a1;
- (void)unregisterApplicationAtURL:(id)a0 reply:(id /* block */)a1;
- (void)removeHandlerForContentType:(id)a0 roles:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (void)removeHandlerForURLScheme:(id)a0 completionHandler:(id /* block */)a1;
- (void)installApplication:(id)a0 atURL:(id)a1 withOptions:(id)a2 installType:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)resetServerStoreWithCompletionHandler:(id /* block */)a0;
- (void)updateContainerUnit:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (void)registerContainerURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)setDatabaseIsSeeded:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)setHandler:(id)a0 version:(struct LSVersionNumber { unsigned char x0[32]; })a1 forURLScheme:(id)a2 completionHandler:(id /* block */)a3;
- (void)synchronizeWithMobileInstallation;
- (void)willHandleInvocation:(id)a0 isReply:(BOOL)a1;
- (BOOL)clientHasMIEntitlement:(id)a0;
- (BOOL)canRegisterWithOptions:(unsigned int)a0;

@end
