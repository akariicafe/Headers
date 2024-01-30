@interface TSUStreamCompression : NSObject {
    int _status;
    struct { char *dst_ptr; unsigned long long dst_size; char *src_ptr; unsigned long long src_size; void *state; } _stream;
    int _operation;
}

@property (copy, nonatomic) id /* block */ handler;

- (BOOL)processBytes:(char *)a0 size:(unsigned long long)a1;
- (BOOL)processBytes:(char *)a0 size:(unsigned long long)a1 flags:(int)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)didFinishProcessing;
- (id)initWithAlgorithm:(int)a0 operation:(int)a1;

@end
