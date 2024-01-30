@interface FSUserFontManager : NSObject

+ (id)_UserFontManagerConnection;
+ (void)suspendFontProvider:(id)a0;
+ (void)deleteAppDialogWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (id)xpcInterface;
+ (id)identifierFromDirectoryName:(id)a0;
+ (id)suspendedFontProviders;
+ (id)profileFontsInfo;
+ (void)reset;
+ (id)registeredFontsForIdentifier:(id)a0 enabled:(BOOL)a1;
+ (double)secondsSinceLastAccessed:(id)a0;
+ (void)synchronizeFontProviders;
+ (id)registeredFontsInfoForIdentifier:(id)a0 enabled:(BOOL)a1;
+ (void)_removeAllUserFonts;
+ (void)uninstallFonts:(id)a0 forIdentifier:(id)a1 completionHandler:(id /* block */)a2;
+ (void)enableOrDisablePersistentURLs:(id)a0 enabled:(BOOL)a1;
+ (id)knownFontProviders;
+ (id)registeredFamiliesForIdentifier:(id)a0 enabled:(BOOL)a1;
+ (id)directoryNameFromIdentifier:(id)a0;
+ (void)unregisterAndRemoveFontFilesForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)installFonts:(id)a0 forIdentifier:(id)a1 enabled:(BOOL)a2 completionHandler:(id /* block */)a3;
+ (id)fontProvidersSubscriptionSupportInfoAndFontFamiliesInstalled:(unsigned long long *)a0 andRemovedCount:(unsigned long long *)a1 andProfileFontsCount:(unsigned long long *)a2;
+ (id)resumeSuspendedFontFiles;
+ (void)synchronizeFontAssets:(id /* block */)a0;
+ (id)userFontsInfo;

@end
