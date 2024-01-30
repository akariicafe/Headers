@interface TSUStreamCompression : NSObject {
    int _status;
    struct { char *dst_ptr; unsigned long long dst_size; char *src_ptr; unsigned long long src_size; void *state; } _stream;
    int _operation;
}

@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;
- (BOOL)processBytes:(char *)a0 size:(unsigned long long)a1;
- (void)dealloc;
- (BOOL)processBytes:(char *)a0 size:(unsigned long long)a1 flags:(int)a2;
- (BOOL)didFinishProcessing;
- (id)initWithAlgorithm:(int)a0 operation:(int)a1;

@end
