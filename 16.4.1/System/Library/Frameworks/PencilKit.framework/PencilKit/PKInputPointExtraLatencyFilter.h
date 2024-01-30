@interface PKInputPointExtraLatencyFilter : PKInputPointBaseFilter {
    struct vector<PKInputPoint, std::allocator<PKInputPoint>> { struct *__begin_; struct *__end_; struct __compressed_pair<PKInputPoint *, std::allocator<PKInputPoint>> { struct *__value_; } __end_cap_; } _inputPoints;
    long long _numFramesExtraLatency;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; })a0;

@end
