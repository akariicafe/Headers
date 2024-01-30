@interface TSTStrokeRunArray : NSObject {
    BOOL mHasCustomStrokes;
    unsigned int mCount;
    unsigned int mAllocCount;
    unsigned int mLastLookup;
    struct TSTStrokeRun { unsigned int x0; unsigned int x1; id x2; double x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 2; unsigned char x7 : 2; } *mStrokes;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } mRWLock;
}

@property (readonly, nonatomic) double maxWidth;

- (id)initWithCount:(unsigned int)a0;
- (void)dealloc;
- (id)description;

@end
