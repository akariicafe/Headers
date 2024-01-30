@interface _NSDataCompressor : NSObject {
    struct { char *dst_ptr; unsigned long long dst_size; char *src_ptr; unsigned long long src_size; void *state; } _stream;
    int _operation;
    int _status;
    id /* block */ _dataHandler;
    unsigned char _buffer[1024];
}

- (BOOL)processBytes:(char *)a0 size:(unsigned long long)a1;
- (id)initWithAlgorithm:(int)a0 operation:(int)a1 dataHandler:(id /* block */)a2;
- (BOOL)finishProcessing;
- (BOOL)processBytes:(char *)a0 size:(unsigned long long)a1 flags:(int)a2;
- (void)dealloc;

@end
