@class NSDictionary, NSMutableDictionary;

@interface NSBinaryObjectStoreFile : NSObject {
    int _databaseVersion;
    NSDictionary *_fullMetadata;
    unsigned long long _primaryKeyGeneration;
    NSMutableDictionary *_mapData;
    NSDictionary *_storeOptions;
}

- (void)dealloc;
- (id)mapData;
- (void)setMapData:(id)a0;
- (BOOL)readMetadataFromFile:(id)a0 securely:(BOOL)a1 error:(id *)a2;
- (id)fullMetadata;
- (void)setFullMetadata:(id)a0;
- (BOOL)writeMetadataToFile:(id)a0 error:(id *)a1;
- (void)setDatabaseVersion:(int)a0;
- (int)databaseVersion;
- (void)setPrimaryKeyGeneration:(unsigned long long)a0;
- (BOOL)_writeMetadataData:(id)a0 andMapDataData:(id)a1 toFile:(id)a2 error:(id *)a3;
- (unsigned long long)primaryKeyGeneration;
- (BOOL)readFromFile:(id)a0 error:(id *)a1;
- (BOOL)writeToFile:(id)a0 error:(id *)a1;

@end
