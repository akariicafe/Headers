@class ML3MusicLibrary;

@interface MLITDBGeniusDatabase : NSObject

@property (readonly, nonatomic) ML3MusicLibrary *musicLibrary;

+ (id)sharedGeniusDatabase;

- (id)init;
- (BOOL)hasGeniusDataAvailable;
- (BOOL)hasGeniusFeatureEnabled;
- (BOOL)_copyBlobData:(id *)a0 blobAllocType:(int)a1 table:(id)a2 blobColumn:(id)a3 where:(id)a4;
- (id)_copyBlobDataAndBytesInTable:(id)a0 blobColumn:(id)a1 where:(id)a2;
- (unsigned int)_getInt32ValueInTable:(id)a0 column:(id)a1;
- (unsigned long long)_getInt64ValueInTable:(id)a0 column:(id)a1 where:(id)a2 limit:(unsigned int)a3;
- (BOOL)_hasAnySongs;
- (BOOL)_hasRowsInTable:(id)a0;
- (BOOL)_readBlobForRowID:(unsigned long long)a0 intoData:(id)a1 table:(const char *)a2 blobColumn:(const char *)a3;
- (BOOL)_readBlobIntoData:(id)a0 table:(id)a1 blobColumn:(id)a2 where:(id)a3;
- (id)copyGeniusConfigrationDataAndBytes;
- (id)copyGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)a0;
- (id)copyGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)a0;
- (unsigned long long)defaultMinTrackCount;
- (unsigned long long)defaultTrackCount;
- (unsigned int)geniusConfigurationVersion;
- (BOOL)getGeniusConfigrationDataAndBytesIntoData:(id)a0;
- (BOOL)getGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)a0 intoData:(id)a1;
- (BOOL)getGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)a0 intoData:(id)a1;
- (void)performGeniusDatabaseReadWithBlock:(id /* block */)a0;

@end
