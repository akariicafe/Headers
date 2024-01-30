@class NSMutableDictionary;

@interface PAMediaConversionServiceResourceURLCollection : NSObject

@property (retain) NSMutableDictionary *urlReferencesByRole;
@property (readonly) unsigned long long urlCount;
@property (readonly) BOOL allURLsAreReadable;

+ (id)collectionWithMainResourceURL:(id)a0;
+ (id)collectionForBookmarkDataDictionaryRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)getSignatureString:(id *)a0 filenameSummary:(id *)a1 forDictionaryRepresentation:(id)a2;
+ (id)filenameSummaryStringForDictionaryRepresentation:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)setResourceURL:(id)a0 forRole:(id)a1;
- (id)description;
- (id)resourceURLForRole:(id)a0;
- (void)setResourceURL:(id)a0 forRole:(id)a1 deleteOnDeallocation:(BOOL)a2;
- (BOOL)isEqual:(id)a0;
- (void)setShouldDeleteURLOnDeallocation:(BOOL)a0 forRole:(id)a1;
- (BOOL)containsAllRoles:(id)a0;
- (BOOL)containsAnyRole:(id)a0;
- (id)typeIdentifierForResourceURLWithRole:(id)a0;
- (id)bookmarkDataDictionaryRepresentationWithError:(id *)a0;
- (BOOL)ensureFilesExistWithError:(id *)a0;
- (BOOL)removeExistingEmptyFilesWithError:(id *)a0;
- (id)logMessageSummaryWithFullPath:(BOOL)a0;
- (id)logMessageSummary;
- (id)fileSizeSummary;
- (void)enumerateResourceURLReferences:(id /* block */)a0;
- (void)enumerateResourceURLs:(id /* block */)a0;
- (id)urlForDebugDumpWithDirectoryName:(id)a0 inExistingParentDirectory:(id)a1 error:(id *)a2;
- (BOOL)copyURL:(id)a0 forRole:(id)a1 toDirectory:(id)a2 error:(id *)a3;

@end
