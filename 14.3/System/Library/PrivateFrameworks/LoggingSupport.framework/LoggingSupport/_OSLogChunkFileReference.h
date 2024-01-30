@class _OSLogCollectionReference;

@interface _OSLogChunkFileReference : NSObject {
    _OSLogCollectionReference *_oslcr;
}

@property (readonly, nonatomic) char *path;
@property (readonly, nonatomic) unsigned long long xattrOldestTime;
@property (readonly, nonatomic) unsigned long long xattrEndTime;

- (void).cxx_destruct;
- (BOOL)readXattrForTimespan:(id *)a0;
- (void)dealloc;
- (id)copyMappedChunkFile:(id *)a0;
- (id)initWithCollection:(id)a0 subpath:(const char *)a1;

@end
