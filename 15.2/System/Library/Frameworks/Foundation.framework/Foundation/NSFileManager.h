@class NSString, NSURL, NSValue;
@protocol NSFileManagerDelegate, NSCopying, NSCoding, NSObject;

@interface NSFileManager : NSObject {
    id _delegate;
    NSValue *_weakDelegateValue;
}

@property (class, readonly) NSFileManager *defaultManager;

@property (readonly, copy) NSURL *homeDirectoryForCurrentUser;
@property (readonly, copy) NSURL *temporaryDirectory;
@property id<NSFileManagerDelegate> delegate;
@property (readonly, copy) NSString *currentDirectoryPath;
@property (readonly, copy) id<NSObject, NSCopying, NSCoding> ubiquityIdentityToken;

- (id)directoryContentsAtPath:(id)a0 matchingExtension:(id)a1 options:(long long)a2 keepExtension:(BOOL)a3 error:(id *)a4;
- (BOOL)filesystemItemMoveOperation:(id)a0 shouldProceedAfterError:(id)a1 movingItemAtPath:(id)a2 toPath:(id)a3;
- (BOOL)createDirectoryAtURL:(id)a0 withIntermediateDirectories:(BOOL)a1 attributes:(id)a2 error:(id *)a3;
- (BOOL)filesystemItemLinkOperation:(id)a0 shouldProceedAfterError:(id)a1 linkingItemAtPath:(id)a2 toPath:(id)a3;
- (id)stringWithFileSystemRepresentation:(const char *)a0 length:(unsigned long long)a1;
- (BOOL)createDirectoryAtPath:(id)a0 withIntermediateDirectories:(BOOL)a1 attributes:(id)a2 error:(id *)a3;
- (void)getFileProviderMessageInterfacesForItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)replaceItemAtURL:(id)a0 withItemAtURL:(id)a1 backupItemName:(id)a2 options:(unsigned long long)a3 resultingItemURL:(id *)a4 error:(id *)a5;
- (id)URLForDirectory:(unsigned long long)a0 inDomain:(unsigned long long)a1 appropriateForURL:(id)a2 create:(BOOL)a3 error:(id *)a4;
- (BOOL)_web_createFileAtPathWithIntermediateDirectories:(id)a0 contents:(id)a1 attributes:(id)a2 directoryAttributes:(id)a3;
- (BOOL)_web_createDirectoryAtPathWithIntermediateDirectories:(id)a0 attributes:(id)a1;
- (id)contentsOfDirectoryAtURL:(id)a0 includingPropertiesForKeys:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (void)synchronouslyGetFileProviderServicesForItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)URLForPublishingUbiquitousItemAtURL:(id)a0 expirationDate:(id *)a1 error:(id *)a2;
- (id)enumeratorAtURL:(id)a0 includingPropertiesForKeys:(id)a1 options:(unsigned long long)a2 errorHandler:(id /* block */)a3;
- (void)synchronouslyGetFileProviderServiceWithName:(id)a0 forItemAtURL:(id)a1 completionHandler:(id /* block */)a2;
- (id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)a0 options:(unsigned long long)a1;
- (BOOL)filesystemItemCopyOperation:(id)a0 shouldCopyItemAtPath:(id)a1 toPath:(id)a2;
- (id)directoryContentsAtPath:(id)a0 matchingExtension:(id)a1 options:(long long)a2 keepExtension:(BOOL)a3;
- (BOOL)filesystemItemMoveOperation:(id)a0 shouldMoveItemAtPath:(id)a1 toPath:(id)a2;
- (BOOL)getRelationship:(long long *)a0 ofDirectoryAtURL:(id)a1 toItemAtURL:(id)a2 error:(id *)a3;
- (BOOL)_web_createIntermediateDirectoriesForPath_nowarn:(id)a0 attributes:(id)a1;
- (BOOL)filesystemItemLinkOperation:(id)a0 shouldLinkItemAtPath:(id)a1 toPath:(id)a2;
- (void)getFileProviderServicesForItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_web_fileExistsAtPath_nowarn:(id)a0 isDirectory:(BOOL *)a1 traverseLink:(BOOL)a2;
- (BOOL)fileExistsAtPath:(id)a0;
- (BOOL)getRelationship:(long long *)a0 ofDirectory:(unsigned long long)a1 inDomain:(unsigned long long)a2 toItemAtURL:(id)a3 error:(id *)a4;
- (id)containerURLForSecurityApplicationGroupIdentifier:(id)a0;
- (BOOL)createSymbolicLinkAtPath:(id)a0 withDestinationPath:(id)a1 error:(id *)a2;
- (id)_attributesOfItemAtURL:(id)a0 filterResourceFork:(BOOL)a1 error:(id *)a2;
- (BOOL)removeItemAtURL:(id)a0 error:(id *)a1;
- (BOOL)setUbiquitous:(BOOL)a0 itemAtURL:(id)a1 destinationURL:(id)a2 error:(id *)a3;
- (BOOL)fileExistsAtPath:(id)a0 isDirectory:(BOOL *)a1;
- (BOOL)getFileSystemRepresentation:(char *)a0 maxLength:(unsigned long long)a1 withPath:(id)a2;
- (id)_attributesOfItemAtPath:(id)a0 filterResourceFork:(BOOL)a1 error:(id *)a2;
- (id)URLsForDirectory:(unsigned long long)a0 inDomains:(unsigned long long)a1;
- (BOOL)startDownloadingUbiquitousItemAtURL:(id)a0 error:(id *)a1;
- (BOOL)_web_changeFinderAttributes:(id)a0 forFileAtPath:(id)a1;
- (BOOL)_web_createFileAtPath:(id)a0 contents:(id)a1 attributes:(id)a2;
- (BOOL)_web_changeFileAttributes_nowarn:(id)a0 atPath:(id)a1;
- (BOOL)setExtendedAttribute:(id)a0 forKey:(id)a1 atPath:(id)a2 error:(id *)a3;
- (BOOL)_processHasUbiquityContainerEntitlement;
- (BOOL)linkItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (id)attributesOfFileSystemForPath:(id)a0 error:(id *)a1;
- (BOOL)copyItemAtPath:(id)a0 toPath:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (BOOL)removeExtendedAttributeForKey:(id)a0 atPath:(id)a1 error:(id *)a2;
- (BOOL)setAttributes:(id)a0 ofItemAtPath:(id)a1 error:(id *)a2;
- (id)attributesOfItemAtPath:(id)a0 error:(id *)a1;
- (BOOL)createSymbolicLinkAtPath:(id)a0 pathContent:(id)a1;
- (BOOL)createFileAtPath:(id)a0 contents:(id)a1 attributes:(id)a2;
- (id)extendedAttributeForKey:(id)a0 atPath:(id)a1 error:(id *)a2;
- (id)destinationOfSymbolicLinkAtPath:(id)a0 error:(id *)a1;
- (BOOL)moveItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (id)_URLForTrashingItemAtURL:(id)a0 create:(BOOL)a1 error:(id *)a2;
- (BOOL)trashItemAtURL:(id)a0 resultingItemURL:(id *)a1 error:(id *)a2;
- (BOOL)_processCanAccessUbiquityIdentityToken;
- (BOOL)copyItemAtURL:(id)a0 toURL:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)contentsOfDirectoryAtPath:(id)a0 error:(id *)a1;
- (id)_URLForReplacingItemAtURL:(id)a0 error:(id *)a1;
- (BOOL)moveItemAtURL:(id)a0 toURL:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)fileAttributesAtPath:(id)a0 traverseLink:(BOOL)a1;
- (id)URLForUbiquityContainerIdentifier:(id)a0;
- (id)pathContentOfSymbolicLinkAtPath:(id)a0;
- (void)_web_noteFileChangedAtPath_nowarn:(id)a0;
- (id)subpathsOfDirectoryAtPath:(id)a0 error:(id *)a1;
- (void)_web_backgroundRemoveFileAtPath:(id)a0;
- (void)_web_backgroundRemoveLeftoverFiles:(id)a0;
- (id)_safeDelegate;
- (id)_web_visibleItemsInDirectoryAtPath:(id)a0;
- (id)extendedAttributesAtPath:(id)a0 error:(id *)a1;
- (BOOL)evictUbiquitousItemAtURL:(id)a0 error:(id *)a1;
- (id)_web_pathWithUniqueFilenameForPath:(id)a0;
- (const char *)fileSystemRepresentationWithPath:(id)a0;
- (BOOL)createDirectoryAtPath:(id)a0 attributes:(id)a1;
- (id)_web_carbonPathForPath_nowarn:(id)a0;
- (BOOL)_web_removeFileOnlyAtPath:(id)a0;
- (id)subpathsAtPath:(id)a0;
- (id)contentsAtPath:(id)a0;
- (BOOL)createSymbolicLinkAtURL:(id)a0 withDestinationURL:(id)a1 error:(id *)a2;
- (id)directoryContentsAtPath:(id)a0;
- (id)enumeratorAtPath:(id)a0;
- (BOOL)_processUsesCloudServices;
- (BOOL)removeFileAtPath:(id)a0 handler:(id)a1;
- (void)_performRemoveFileAtPath:(id)a0;
- (id)_displayPathForPath:(id)a0;
- (id)_web_startupVolumeName_nowarn;
- (BOOL)isDeletableFileAtPath:(id)a0;
- (BOOL)isUbiquitousItemAtURL:(id)a0;
- (BOOL)isWritableFileAtPath:(id)a0;
- (BOOL)isReadableFileAtPath:(id)a0;
- (BOOL)changeFileAttributes:(id)a0 atPath:(id)a1;
- (BOOL)contentsEqualAtPath:(id)a0 andPath:(id)a1;
- (id)displayNameAtPath:(id)a0;
- (BOOL)linkItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (BOOL)directoryCanBeCreatedAtPath:(id)a0;
- (BOOL)copyItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (id)componentsToDisplayForPath:(id)a0;
- (BOOL)changeCurrentDirectoryPath:(id)a0;
- (id)fileSystemAttributesAtPath:(id)a0;
- (BOOL)isExecutableFileAtPath:(id)a0;
- (BOOL)moveItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (BOOL)copyItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (BOOL)filesystemItemCopyOperation:(id)a0 shouldProceedAfterError:(id)a1 copyingItemAtPath:(id)a2 toPath:(id)a3;
- (void)dealloc;
- (BOOL)removeItemAtPath:(id)a0 error:(id *)a1;

@end
