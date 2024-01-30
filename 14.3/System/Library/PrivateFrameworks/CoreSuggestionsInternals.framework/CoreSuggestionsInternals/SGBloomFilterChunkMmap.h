@class NSString;

@interface SGBloomFilterChunkMmap : NSObject <SGBloomFilterChunk> {
    NSString *_path;
    int _fd;
    unsigned int *_countPtr;
    unsigned int _mask;
    char *_buf;
}

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) unsigned int count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)add:(union { unsigned long long x0; union { unsigned int x0; unsigned int x1; } x1; })a0;
- (id)initWithPath:(id)a0;
- (id)init;
- (void)close;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)exists:(union { unsigned long long x0; union { unsigned int x0; unsigned int x1; } x1; })a0;

@end
