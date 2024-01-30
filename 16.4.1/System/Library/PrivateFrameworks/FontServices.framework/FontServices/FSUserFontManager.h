@interface FSUserFontManager : NSObject

+ (void)deleteAppDialogWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (id)registeredFontsInfoForIdentifier:(id)a0 enabled:(BOOL)a1 appInfo:(id)a2;
+ (void)updateAppInfo:(id)a0 forIdentifier:(id)a1;
+ (id)_UserFontManagerConnection;
+ (void)synchronizeProfileFonts:(id /* block */)a0;
+ (struct { unsigned int x0[8]; })auditToken;
+ (id)userFontsInfo;
+ (id)suspendedFontProviders;
+ (id)resumeSuspendedFontFiles;
+ (void)synchronizeFontProviders;
+ (id)xpcInterface;
+ (id)knownFontProviders;
+ (id)directoryNameFromIdentifier:(id)a0;
+ (id)registeredFamiliesForIdentifier:(id)a0 enabled:(BOOL)a1;
+ (id)registeredFontsForIdentifier:(id)a0 enabled:(BOOL)a1;
+ (id)identifierFromDirectoryName:(id)a0;
+ (id)fontProvidersSubscriptionSupportInfoAndFontFamiliesInstalled:(unsigned long long *)a0 andRemovedCount:(unsigned long long *)a1 andProfileFontsCount:(unsigned long long *)a2;
+ (void)installFonts:(id)a0 forIdentifier:(id)a1 enabled:(BOOL)a2 appInfo:(id)a3 completionHandler:(id /* block */)a4;
+ (void)_removeAllUserFonts;
+ (id)profileFontsInfo;
+ (void)suspendFontProvider:(id)a0;
+ (void)unregisterAndRemoveFontFilesForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (double)secondsSinceLastAccessed:(id)a0;
+ (void)enableOrDisablePersistentURLs:(id)a0 enabled:(BOOL)a1;
+ (void)reset;
+ (void)synchronizeFontAssets:(id /* block */)a0;
+ (void)uninstallFonts:(id)a0 forIdentifier:(id)a1 appInfo:(id)a2 completionHandler:(id /* block */)a3;

@end
