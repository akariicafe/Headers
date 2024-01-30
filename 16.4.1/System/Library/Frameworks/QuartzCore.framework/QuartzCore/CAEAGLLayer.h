@class NSDictionary;

@interface CAEAGLLayer : CALayer <EAGLDrawable> {
    struct _CAEAGLNativeWindow { struct _EAGLNativeWindowObject { int x0; unsigned int x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; } x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; struct x_list_struct *x6; unsigned int x7; unsigned long long x8; struct Atomic { struct { int x0; } x0; } x9; struct Atomic { struct { int x0; } x0; } x10; struct SpinLock { struct { int x0; } x0; } x11; struct _CAImageQueue *x12; id x13; double x14; double x15; struct x_list_struct *x16; unsigned int x17; struct CAEAGLBuffer *x18; struct CAEAGLBuffer *x19; unsigned int x20; unsigned int x21; unsigned int x22; struct CAEAGLBuffer *x23; id x24; struct Atomic { struct { int x0; } x0; } x25; unsigned long long x26; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; } *_win;
}

@property (readonly) struct _EAGLNativeWindowObject { int x0; unsigned int x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; } *nativeWindow;
@property (getter=isAsynchronous) BOOL asynchronous;
@property unsigned long long maximumDrawableCount;
@property BOOL lowLatency;
@property double inputTime;
@property double drawableTimeoutSeconds;
@property BOOL presentsWithTransaction;
@property (copy) NSDictionary *drawableProperties;

+ (id)defaultValueForKey:(id)a0;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;

- (void)_didCommitLayer:(void *)a0;
- (void)didChangeValueForKey:(id)a0;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)dealloc;
- (BOOL)isDrawableAvailable;
- (BOOL)shouldArchiveValueForKey:(id)a0;
- (void)discardContents;
- (void)_display;
- (BOOL)_defersDidBecomeVisiblePostCommit;
- (BOOL)isDrawableAvailableInternal;

@end
