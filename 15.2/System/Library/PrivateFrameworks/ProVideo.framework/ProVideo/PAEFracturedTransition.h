@class NSLock;

@interface PAEFracturedTransition : PAETransitionDefaultBase {
    struct FracturedParams { BOOL x0; float x1; BOOL x2; int x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; float x8; float x9; int x10; float x11; float x12; double x13[4]; BOOL x14; double x15[4]; float x16; float x17; BOOL x18; float x19; int x20; BOOL x21; float x22; float x23; BOOL x24; float x25; float x26[2]; float x27[2]; } *_fxParams;
    struct vector<FracturedUtils::FracturedFXPoolItem *, std::allocator<FracturedUtils::FracturedFXPoolItem *>> { struct FracturedFXPoolItem **__begin_; struct FracturedFXPoolItem **__end_; struct __compressed_pair<FracturedUtils::FracturedFXPoolItem **, std::allocator<FracturedUtils::FracturedFXPoolItem *>> { struct FracturedFXPoolItem **__value_; } __end_cap_; } _fxPool;
    NSLock *_fxPoolLock;
}

- (id)properties;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithAPIManager:(id)a0;
- (BOOL)addParameters;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 inputInfoA:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a1 inputInfoB:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a2 timeFraction:(float)a3 hardware:(BOOL *)a4 software:(BOOL *)a5;
- (BOOL)canThrowRenderOutput:(id)a0 withInputA:(id)a1 withInputB:(id)a2 withTimeFraction:(float)a3 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a4;

@end
