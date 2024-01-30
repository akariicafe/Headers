@interface _NSDataCompressor : NSObject {
    struct { char *dst_ptr; unsigned long long dst_size; char *src_ptr; unsigned long long src_size; void *state; } _stream;
    int _operation;
    int _status;
    void *_originalDstBuffer;
    id /* block */ _dataHandler;
}

- (BOOL)processBytes:(char *)a0 size:(unsigned long long)a1;
- (void)dealloc;
- (BOOL)processBytes:(char *)a0 size:(unsigned long long)a1 flags:(int)a2;
- (BOOL)finishProcessing;
- (id)initWithAlgorithm:(long long)a0 operation:(int)a1 dataHandler:(id /* block */)a2;

@end
