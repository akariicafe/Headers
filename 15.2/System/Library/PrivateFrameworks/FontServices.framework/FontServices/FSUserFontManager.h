@interface FSUserFontManager : NSObject

+ (void)uninstallFonts:(id)a0 forIdentifier:(id)a1 completionHandler:(id /* block */)a2;
+ (id)userFontsInfo;
+ (void)suspendFontProvider:(id)a0;
+ (id)resumeSuspendedFontFiles;
+ (void)synchronizeProfileFonts:(id /* block */)a0;
+ (id)fontProvidersSubscriptionSupportInfoAndFontFamiliesInstalled:(unsigned long long *)a0 andRemovedCount:(unsigned long long *)a1 andProfileFontsCount:(unsigned long long *)a2;
+ (void)_removeAllUserFonts;
+ (void)deleteAppDialogWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (id)suspendedFontProviders;
+ (id)registeredFamiliesForIdentifier:(id)a0 enabled:(BOOL)a1;
+ (void)installFonts:(id)a0 forIdentifier:(id)a1 enabled:(BOOL)a2 completionHandler:(id /* block */)a3;
+ (void)unregisterAndRemoveFontFilesForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (double)secondsSinceLastAccessed:(id)a0;
+ (id)xpcInterface;
+ (void)synchronizeFontProviders;
+ (id)profileFontsInfo;
+ (id)registeredFontsForIdentifier:(id)a0 enabled:(BOOL)a1;
+ (id)identifierFromDirectoryName:(id)a0;
+ (id)registeredFontsInfoForIdentifier:(id)a0 enabled:(BOOL)a1;
+ (void)enableOrDisablePersistentURLs:(id)a0 enabled:(BOOL)a1;
+ (id)knownFontProviders;
+ (id)_UserFontManagerConnection;
+ (void)reset;
+ (id)directoryNameFromIdentifier:(id)a0;
+ (void)synchronizeFontAssets:(id /* block */)a0;

@end
