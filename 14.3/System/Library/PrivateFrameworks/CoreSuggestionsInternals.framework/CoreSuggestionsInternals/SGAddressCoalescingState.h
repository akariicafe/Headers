@class NSMutableArray;

@interface SGAddressCoalescingState : NSObject {
    long long _lastAddressIndex;
    long long _lastAddressEndPos;
    struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *_lastResult;
}

@property (retain, nonatomic) NSMutableArray *matches;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)coalesceAddress:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x0; struct __DDQueryOffset { unsigned int x0 : 32; unsigned int x1 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0 orAppendMatch:(id)a1;

@end
