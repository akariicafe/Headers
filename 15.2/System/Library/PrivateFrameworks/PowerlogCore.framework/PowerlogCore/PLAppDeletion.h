@interface PLAppDeletion : NSObject

+ (BOOL)deferXPCActivity:(id)a0;
+ (void)iterateAgents;
+ (BOOL)setFileProtectionForPath:(id)a0 withLevel:(id)a1;
+ (void)setup;
+ (void)iterateServices;
+ (BOOL)finishXPCActivity:(id)a0;
+ (void)populateIdentifiers:(id)a0;
+ (void)traverseVersionDirectory:(id)a0 withBlock:(id /* block */)a1;
+ (BOOL)changePermissionsForFilesInDirectory:(id)a0 withProtectionLevel:(id)a1;
+ (id)getProtectionLevel:(int)a0;
+ (BOOL)changePermissionForDirectory:(id)a0 withProtectionLevel:(id)a1;
+ (id)filePermissionCriteria;
+ (void)handleFilePermissionXPCActivityCallback:(id)a0;
+ (BOOL)changeClassProtection:(int)a0;
+ (void)registerAppDeletionActivity;
+ (void)constructAppReferenceTableList;
+ (void)constructFileNames;
+ (void)constructAppReferenceMapping;
+ (id)constructUpdateQueries;
+ (id)pluginsForBundleID:(id)a0;
+ (id)processNameForBundleID:(id)a0;
+ (void)maskAssociatedPlugins:(id)a0 withMaskedDictionary:(id)a1;
+ (void)maskProcessName:(id)a0 withMaskedDictionary:(id)a1;
+ (void)addFilesToList:(id)a0;
+ (void)decompressFile:(id)a0 withDirPath:(id)a1;
+ (void)updateQuery:(id)a0;
+ (void)deleteAppReferencesInCurrentPowerlog;
+ (void)deleteAppReferencesFromCompressedFiles:(id)a0;
+ (void)deleteAppReferenceMapping;
+ (id)appDeletionCriteria;
+ (void)handleAppDeletionXPCActivityCallback:(id)a0;
+ (void)deleteAppReferences:(id)a0;
+ (void)resetStateVariables;
+ (void)registerFilePermissionActivity;

@end
