@class NSDictionary, NSMutableDictionary;

@interface NSBinaryObjectStoreFile : NSObject {
    int _databaseVersion;
    NSDictionary *_fullMetadata;
    unsigned long long _primaryKeyGeneration;
    NSMutableDictionary *_mapData;
    NSDictionary *_storeOptions;
}

- (BOOL)_writeMetadataData:(id)a0 andMapDataData:(id)a1 toFile:(id)a2 error:(id *)a3;
- (void)dealloc;

@end
