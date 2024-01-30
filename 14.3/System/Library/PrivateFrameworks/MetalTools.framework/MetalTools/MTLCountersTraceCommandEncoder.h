@interface MTLCountersTraceCommandEncoder : NSObject {
    struct BinaryBuffer { void /* function */ **x0; struct StreamBuffer { char *x0; char *x1; char *x2; } x1; } *_stream;
}

@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } segment;

- (void)pushDebugGroup:(id)a0;
- (void)setLabel:(id)a0;
- (void)insertDebugSignpost:(id)a0;
- (void)endEncoding;
- (void)popDebugGroup;
- (id)init:(struct BinaryBuffer { void /* function */ **x0; struct StreamBuffer { char *x0; char *x1; char *x2; } x1; } *)a0 flags:(unsigned long long)a1;

@end
