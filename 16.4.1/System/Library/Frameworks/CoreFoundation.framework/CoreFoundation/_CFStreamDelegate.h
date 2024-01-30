@class NSString;

@interface _CFStreamDelegate : NSObject <NSStreamDelegate> {
    unsigned long long _flags;
    struct { long long version; void *info; void /* function */ *retain; void /* function */ *release; void /* function */ *copyDescription; } _client;
    union { void /* function */ *_rcb; void /* function */ *_wcb; void /* function */ *genericCallback; void *genericPointer; } _cb;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)dealloc;
- (id)initWithStreamEvents:(unsigned long long)a0 callback:(void *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;

@end
