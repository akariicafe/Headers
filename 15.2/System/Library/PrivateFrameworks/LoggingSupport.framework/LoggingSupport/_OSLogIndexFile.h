@class NSString, _OSLogChunkFileReference, _OSLogChunkStore;

@interface _OSLogIndexFile : NSObject <_OSLogIndexTimeRangable> {
    _OSLogChunkFileReference *_cfr;
    _OSLogChunkStore *_cs;
    unsigned char _bootu[16];
    BOOL _timespanDetermined;
    unsigned long long _cot_header;
    unsigned long long _cot;
    unsigned long long _cet;
}

@property (readonly, nonatomic) const char *bootUUID;
@property (readonly, nonatomic) unsigned long long oldestTime;
@property (readonly, nonatomic) unsigned long long endTime;
@property (readonly, nonatomic) char *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTraceFile:(id)a0 error:(id *)a1;
- (BOOL)_loadCatalogMetadataForTimespan;
- (BOOL)_loadHeaderMetadata:(id)a0;
- (BOOL)_determineTimespan;
- (void).cxx_destruct;
- (id)copyMappedChunkStore:(id *)a0;
- (id)initWithChunkStore:(id)a0 error:(id *)a1;
- (void)dealloc;

@end
