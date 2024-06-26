@interface WBSFaviconProviderDatabaseController : WBSSQLiteStore

- (id)_fetchIconInfosForRejectedResourcesWithPageURLString:(id)a0 iconURLString:(id)a1;
- (int)_migrateToSchemaVersion_4;
- (void)linkPageURLString:(id)a0 toExistingIconURLString:(id)a1 completionHandler:(id /* block */)a2;
- (void)iconInfoForPageURLString:(id)a0 completionHandler:(id /* block */)a1;
- (id)_findOrphansFromIconUUIDs:(id)a0;
- (void)_deleteRejectedResourceForPageURLStrings:(id)a0;
- (id)_fetchPageURLStringsWithPredicate:(id)a0;
- (void)removeAllPageURLStringsWithCompletionHandler:(id /* block */)a0;
- (id)_fetchAllPageURLStrings;
- (int)_migrateToSchemaVersion_3;
- (void)_generateStatementsForQuery:(id)a0 arguments:(id)a1 statementCallback:(id /* block */)a2;
- (void)_deletePageURLs:(id)a0;
- (void)iconInfoForIconURLString:(id)a0 completionHandler:(id /* block */)a1;
- (void)markRejectedIconAtPageURLString:(id)a0 iconURLString:(id)a1 completionHandler:(id /* block */)a2;
- (void)_deleteIconWithUUIDFromIconInfo:(id)a0;
- (void)removeAllDataForIconUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)linkAndUpdateTimestampForIconWithPageURLString:(id)a0 iconURLString:(id)a1 iconSize:(struct CGSize { double x0; double x1; })a2 iconHasGeneratedResolutions:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)fetchPageURLStringsWithPrefixesIn:(id)a0 completionHandler:(id /* block */)a1;
- (id)_setIconUUID:(id)a0 forIconURLString:(id)a1 size:(struct CGSize { double x0; double x1; })a2 hasGeneratedResolutions:(BOOL)a3;
- (BOOL)_hasPageURLsForIconUUID:(id)a0;
- (void)_deletePageURLsWithUUIDFromPageInfo:(id)a0;
- (void)rejectedResourceIconInfosForPageURLString:(id)a0 iconURLString:(id)a1 completionHandler:(id /* block */)a2;
- (void)firstIconUUIDMatchingPageURLStringIn:(id)a0 completionHandler:(id /* block */)a1;
- (id)_fetchIconInfoForIconURLString:(id)a0;
- (void)removePageURLString:(id)a0 completionHandler:(id /* block */)a1;
- (id)_fetchIconInfoForIconUUID:(id)a0;
- (void)_deleteAllPageAndIconEntries;
- (void)_deleteRejectedResourceForPageURLString:(id)a0;
- (void)fetchAllIconUUIDsWithCompletionHandler:(id /* block */)a0;
- (void)markValidIconAtPageURLString:(id)a0 iconURLString:(id)a1 completionHandler:(id /* block */)a2;
- (void)firstIconInfoMatchingIconURLStringIn:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setPageURL:(id)a0 toIconUUID:(id)a1;
- (void)_deletePageURL:(id)a0;
- (id)_setTimestampToNowForIconUUID:(id)a0;
- (BOOL)_deleteRejectedResourceForPageURLString:(id)a0 iconURLString:(id)a1;
- (BOOL)_setRejectedResourceForPageURL:(id)a0 iconURLString:(id)a1;
- (id)_fetchIconUUIDForPageURLString:(id)a0;
- (int)_migrateToSchemaVersion:(int)a0;
- (void)removePageURLStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)_deleteIconsWithUUIDsFromIconInfo:(id)a0;
- (int)_currentSchemaVersion;
- (void)fetchAllKnownPageURLStringsWithCompletionHandler:(id /* block */)a0;
- (id)_fetchIconUUIDsForPageURLStrings:(id)a0;
- (void)_firstIconUUIDForPageURLStrings:(id)a0 completionHandler:(id /* block */)a1;
- (int)_migrateToSchemaVersion_2;
- (int)_createFreshDatabaseSchema;
- (void)firstIconInfoMatchingPageURLStringIn:(id)a0 completionHandler:(id /* block */)a1;

@end
