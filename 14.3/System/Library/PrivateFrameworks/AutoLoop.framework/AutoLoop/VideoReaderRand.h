@interface VideoReaderRand : VideoReader {
    struct vector<CMTime, std::__1::allocator<CMTime> > { struct *__begin_; struct *__end_; struct __compressed_pair<CMTime *, std::__1::allocator<CMTime> > { struct *__value_; } __end_cap_; } _frameTimes;
    int _lastFrameDex;
    int _numFrames;
}

- (void).cxx_destruct;
- (int)reset;
- (int)indexForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id).cxx_construct;
- (id)initFromFile:(id)a0 withParams:(id)a1;
- (id)initFromFile:(id)a0 frameTimes:(const struct vector<CMTime, std::__1::allocator<CMTime> > { struct *x0; struct *x1; struct __compressed_pair<CMTime *, std::__1::allocator<CMTime> > { struct *x0; } x2; } *)a1;
- (int)getFrameAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 frame:(struct opaqueCMSampleBuffer **)a1 rawFrameIndex:(unsigned int *)a2;

@end
