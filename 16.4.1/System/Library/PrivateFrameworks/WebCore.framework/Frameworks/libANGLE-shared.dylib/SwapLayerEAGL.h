@class EAGLContext;

@interface SwapLayerEAGL : CAEAGLLayer {
    EAGLContext *mDisplayContext;
    BOOL initialized;
    struct SharedSwapState { struct SwapTexture { unsigned int x0; unsigned int x1; unsigned int x2; unsigned long long x3; } x0[3]; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; struct SwapTexture *x2; struct SwapTexture *x3; struct SwapTexture *x4; } *mSwapState;
    const void *mFunctions;
    unsigned int mReadFramebuffer;
}

- (void)display;
- (id)initWithSharedState:(struct SharedSwapState { struct SwapTexture { unsigned int x0; unsigned int x1; unsigned int x2; unsigned long long x3; } x0[3]; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; struct SwapTexture *x2; struct SwapTexture *x3; struct SwapTexture *x4; } *)a0 withContext:(id)a1 withFunctions:(const void *)a2;

@end
