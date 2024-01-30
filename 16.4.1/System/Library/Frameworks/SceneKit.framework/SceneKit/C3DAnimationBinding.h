@interface C3DAnimationBinding : NSObject {
    void *_owner;
    struct __C3DModelTarget { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; void *x2; short x3; char x4; unsigned char x5; unsigned char x6; BOOL x7; void /* function */ *x8; void /* function */ *x9; } *_source;
    struct __C3DModelTarget { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; void *x2; short x3; char x4; unsigned char x5; unsigned char x6; BOOL x7; void /* function */ *x8; void /* function */ *x9; } *_destination;
    id /* block */ _valueTransformer;
}

- (void)dealloc;

@end
