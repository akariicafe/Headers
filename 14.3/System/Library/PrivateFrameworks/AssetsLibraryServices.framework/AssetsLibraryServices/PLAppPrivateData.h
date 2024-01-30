@class NSURL, NSMutableDictionary, PLPhotoLibraryPathManager;

@interface PLAppPrivateData : NSObject

@property (retain) NSMutableDictionary *backingDictionary;
@property (retain) NSURL *libraryURL;
@property (retain) PLPhotoLibraryPathManager *pathManager;

+ (id)appPrivateDataForLibraryURL:(id)a0;
+ (BOOL)accessInstanceVariablesDirectly;

- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (id)dictionaryWithValuesForKeys:(id)a0;
- (void).cxx_destruct;
- (id)valueForKey:(id)a0;
- (void)setValuesForKeysWithDictionary:(id)a0;
- (id)allKeys;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)debugDescription;
- (id)_dictionaryStorageURL;
- (void)_saveToFilesystem;
- (void)_readFromFilesystem;
- (id)_appPrivateDataFolderURL;
- (void)_recursiveCreateSubDictionariesIfMissing:(id)a0 index:(unsigned long long)a1 parentDictionary:(id)a2;
- (id)valueForKeyPath:(id)a0;
- (id)initWithLibraryURL:(id)a0;

@end
