@interface VideoAccessIndexNorm : VideoAccessIndex {
    void *mNormalizer;
}

- (id)initFromFile:(id)a0 pixelFormat:(unsigned int)a1 normalizer:(void *)a2;
- (int)getFrameAtIndex:(unsigned int)a0 pixBuf:(struct __CVBuffer **)a1;

@end
