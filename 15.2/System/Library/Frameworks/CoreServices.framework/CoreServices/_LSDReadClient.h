@interface _LSDReadClient : _LSDClient <_LSDReadProtocol>

- (void)getServerStoreWithCompletionHandler:(id /* block */)a0;
- (void)willHandleInvocation:(id)a0 isReply:(BOOL)a1;
- (void)getBundleRecordForCoreTypesWithCompletionHandler:(id /* block */)a0;
- (void)getTypeRecordWithTag:(id)a0 ofClass:(id)a1 conformingToIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)getSessionLanguagesForImproperlyLocalizedProcessWithCompletionHandler:(id /* block */)a0;
- (void)getServerStoreNonBlockingWithCompletionHandler:(id /* block */)a0;
- (void)getWhetherTypeIdentifier:(id)a0 conformsToTypeIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)getRelatedTypesOfTypeWithIdentifier:(id)a0 maximumDegreeOfSeparation:(long long)a1 completionHandler:(id /* block */)a2;
- (void)getBundleProxyForCurrentProcessWithCompletionHandler:(id /* block */)a0;
- (void)getPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)getExtensionPointRecordWithIdentifier:(id)a0 platform:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (void)mapBundleIdentifiers:(id)a0 orMachOUUIDs:(id)a1 completionHandler:(id /* block */)a2;
- (void)getBoundIconInfoForDocumentProxy:(id)a0 completionHandler:(id /* block */)a1;
- (void)getKernelPackageExtensionsWithCompletionHandler:(id /* block */)a0;
- (void)getAllUserActivityTypesAndDomainNamesWithCompletionHandler:(id /* block */)a0;
- (void)getServerStatusWithCompletionHandler:(id /* block */)a0;
- (void)resolveQueries:(id)a0 legacySPI:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)getTypeRecordWithIdentifier:(id)a0 allowUndeclared:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)getKnowledgeUUIDAndSequenceNumberWithCompletionHandler:(id /* block */)a0;
- (void)mapPlugInBundleIdentifiersToContainingBundleIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)getTypeRecordsWithIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)getExtensionPointRecordForCurrentProcessWithCompletionHandler:(id /* block */)a0;
- (void)getResourceValuesForKeys:(id)a0 URL:(id)a1 preferredLocalizations:(id)a2 completionHandler:(id /* block */)a3;
- (void)getDiskUsage:(id)a0 completionHandler:(id /* block */)a1;
- (void)getTypeRecordForImportedTypeWithIdentifier:(id)a0 conformingToIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)getTypeRecordsWithTag:(id)a0 ofClass:(id)a1 conformingToIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)getBundleRecordForCurrentProcessWithCompletionHandler:(id /* block */)a0;

@end
