@interface PLAppDeletion : NSObject

+ (BOOL)deferXPCActivity:(id)a0;
+ (void)setup;
+ (void)populateIdentifiers:(id)a0;
+ (BOOL)finishXPCActivity:(id)a0;
+ (void)traverseVersionDirectory:(id)a0 withBlock:(id /* block */)a1;
+ (void)iterateServices;
+ (void)iterateAgents;
+ (BOOL)setFileProtectionForPath:(id)a0 withLevel:(id)a1;
+ (void)addFilesToList:(id)a0;
+ (id)appDeletionCriteria;
+ (BOOL)changeClassProtection:(int)a0;
+ (BOOL)changePermissionForDirectory:(id)a0 withProtectionLevel:(id)a1;
+ (BOOL)changePermissionsForFilesInDirectory:(id)a0 withProtectionLevel:(id)a1;
+ (void)constructAppReferenceMapping;
+ (void)constructAppReferenceTableList;
+ (void)constructFileNames;
+ (id)constructUpdateQueries;
+ (void)deleteAppReferenceMapping;
+ (void)deleteAppReferences:(id)a0;
+ (void)deleteAppReferencesFromCompressedFiles:(id)a0;
+ (void)deleteAppReferencesInCurrentPowerlog;
+ (id)filePermissionCriteria;
+ (id)getProtectionLevel:(int)a0;
+ (void)handleAppDeletionXPCActivityCallback:(id)a0;
+ (void)handleFilePermissionXPCActivityCallback:(id)a0;
+ (void)maskAssociatedPlugins:(id)a0 withMaskedDictionary:(id)a1;
+ (void)maskProcessName:(id)a0 withMaskedDictionary:(id)a1;
+ (id)pluginsForBundleID:(id)a0;
+ (id)processNameForBundleID:(id)a0;
+ (void)registerAppDeletionActivity;
+ (void)registerFilePermissionActivity;
+ (void)resetStateVariables;
+ (void)updateQuery:(id)a0;

@end
