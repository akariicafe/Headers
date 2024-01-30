@class SRFrameStore;

@interface SRFramesStoreOffsetEnumerator : NSObject <NSFastEnumeration> {
    SRFrameStore *_framesStore;
    unsigned long long _offset;
}

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)dealloc;

@end
