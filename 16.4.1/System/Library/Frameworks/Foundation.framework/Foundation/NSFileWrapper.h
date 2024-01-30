@class NSString, NSDictionary, NSData, NSURL, NSHashTable, NSError;

@interface NSFileWrapper : NSObject <NSSecureCoding> {
    NSDictionary *_fileAttributes;
    NSString *_preferredFileName;
    NSString *_fileName;
    id _contents;
    id _icon;
    NSURL *_contentsURL;
    NSHashTable *_parents;
    NSError *_contentsLazyReadingError;
    NSDictionary *_cachedDirectoryChildrenAsDictionary;
    BOOL _contentsMustBeReadWithoutMapping;
    BOOL _attributesMustBeWrittenSoNoHardLinking;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isDirectory) BOOL directory;
@property (readonly, getter=isRegularFile) BOOL regularFile;
@property (readonly, getter=isSymbolicLink) BOOL symbolicLink;
@property (copy) NSString *preferredFilename;
@property (copy) NSString *filename;
@property (copy) NSDictionary *fileAttributes;
@property (readonly, copy) NSData *serializedRepresentation;
@property (readonly, copy) NSDictionary *fileWrappers;
@property (readonly, copy) NSData *regularFileContents;
@property (readonly, copy) NSURL *symbolicLinkDestinationURL;

+ (void)initialize;
+ (void)_removeTemporaryDirectoryAtURL:(id)a0;
+ (BOOL)_canSafelyMapFilesAtPath:(id)a0;
+ (BOOL)_finishWritingToURL:(id)a0 byMovingItemAtURL:(id)a1 addingAttributes:(id)a2 error:(id *)a3;
+ (BOOL)_finishWritingToURL:(id)a0 byTakingContentsFromItemAtURL:(id)a1 addingAttributes:(id)a2 usingTemporaryDirectoryAtURL:(id)a3 backupFileName:(id)a4 error:(id *)a5;
+ (BOOL)_forPath:(id)a0 getItemKind:(id *)a1 modificationDate:(id *)a2;
+ (id)_newContentsAtURL:(id)a0 path:(id)a1 itemKind:(id)a2 oldChildrenByUniqueFileName:(id)a3 options:(unsigned long long)a4 error:(id *)a5;
+ (id)_pathForURL:(id)a0 reading:(BOOL)a1 error:(id *)a2;
+ (id)_temporaryDirectoryURLForWritingToURL:(id)a0 error:(id *)a1;
+ (void)_writeAttributes:(id)a0 toURL:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithSerializedRepresentation:(id)a0;
- (void)dealloc;
- (id)init;
- (id)addFileWrapper:(id)a0;
- (void)_addParent:(id)a0;
- (void)_removeChild:(id)a0 forUniqueFileName:(id)a1;
- (id)_addChild:(id)a0 forUniqueFileName:(id)a1;
- (id)_attributesToWrite;
- (BOOL)_forWritingToURL:(id)a0 returnContentsLazyReadingError:(id *)a1;
- (id)_fullDescription:(BOOL)a0;
- (void)_initDirectoryContents;
- (id)_initWithImpl:(id)a0 preferredFileName:(id)a1 uniqueFileName:(id)a2 docInfo:(id)a3 iconData:(id)a4;
- (BOOL)_matchesItemKind:(id)a0 modificationDate:(id)a1;
- (id)_newImpl;
- (void)_observePreferredFileNameOfChild:(id)a0;
- (BOOL)_readContentsFromURL:(id)a0 path:(id)a1 itemKind:(id)a2 options:(unsigned long long)a3 error:(id *)a4;
- (void)_removeParent:(id)a0;
- (void)_resetFileModificationDate;
- (id)_uniqueFileNameOfChild:(id)a0;
- (void)_updateDescendantFileNames;
- (BOOL)_writeContentsToURL:(id)a0 path:(id)a1 originalContentsURL:(id)a2 tryHardLinking:(BOOL)a3 didHardLinking:(BOOL *)a4 error:(id *)a5;
- (id)addRegularFileWithContents:(id)a0 preferredFilename:(id)a1;
- (id)initDirectoryWithFileWrappers:(id)a0;
- (id)initRegularFileWithContents:(id)a0;
- (id)initSymbolicLinkWithDestinationURL:(id)a0;
- (id)keyForFileWrapper:(id)a0;
- (BOOL)matchesContentsOfURL:(id)a0;
- (BOOL)readFromURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)removeFileWrapper:(id)a0;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 originalContentsURL:(id)a2 error:(id *)a3;

@end
