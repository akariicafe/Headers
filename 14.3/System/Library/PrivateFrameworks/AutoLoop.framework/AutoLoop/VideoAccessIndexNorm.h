@interface VideoAccessIndexNorm : VideoAccessIndex {
    struct FrameTimeNormalizer { void /* function */ **x0; struct vector<CMTime, std::__1::allocator<CMTime> > { struct *x0; struct *x1; struct __compressed_pair<CMTime *, std::__1::allocator<CMTime> > { struct *x0; } x2; } x1; struct vector<CMTime, std::__1::allocator<CMTime> > { struct *x0; struct *x1; struct __compressed_pair<CMTime *, std::__1::allocator<CMTime> > { struct *x0; } x2; } x2; unsigned int x3; struct { long long x0; int x1; unsigned int x2; long long x3; } x4; struct { long long x0; int x1; unsigned int x2; long long x3; } x5; } *mNormalizer;
}

- (id)initFromFile:(id)a0 pixelFormat:(unsigned int)a1 normalizer:(struct FrameTimeNormalizer { void /* function */ **x0; struct vector<CMTime, std::__1::allocator<CMTime> > { struct *x0; struct *x1; struct __compressed_pair<CMTime *, std::__1::allocator<CMTime> > { struct *x0; } x2; } x1; struct vector<CMTime, std::__1::allocator<CMTime> > { struct *x0; struct *x1; struct __compressed_pair<CMTime *, std::__1::allocator<CMTime> > { struct *x0; } x2; } x2; unsigned int x3; struct { long long x0; int x1; unsigned int x2; long long x3; } x4; struct { long long x0; int x1; unsigned int x2; long long x3; } x5; } *)a2;
- (int)getFrameAtIndex:(unsigned int)a0 pixBuf:(struct __CVBuffer **)a1;

@end
