@class NSString, UNSBundleLibrarian;

@interface UNSKeyedDictionaryRepository : NSObject {
    NSString *_directory;
    NSString *_fileName;
    NSString *_pathExtension;
    UNSBundleLibrarian *_librarian;
}

- (BOOL)_saveDictionary:(id)a0 atPath:(id)a1;
- (void)_removeDictionaryAtPath:(id)a0;
- (id)_dictionaryAtPath:(id)a0;
- (id)_dataAtPath:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)_directoryForKey:(id)a0;
- (void)removeDictionaryForKey:(id)a0;
- (id)allKeys;
- (id)_pathForKey:(id)a0;
- (void).cxx_destruct;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (id)initWithDirectory:(id)a0 fileName:(id)a1 pathExtension:(id)a2 librarian:(id)a3;

@end
