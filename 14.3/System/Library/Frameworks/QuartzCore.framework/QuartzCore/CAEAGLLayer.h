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

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (id)defaultValueForKey:(id)a0;

- (void)_display;
- (void)_didCommitLayer:(struct Transaction { struct Shared *x0; struct HashTable<CA::Layer *, unsigned int *> *x1; int x2; unsigned int x3; struct Level *x4; struct List<void (^)()> *x5; struct Command *x6; struct Deleted *x7; struct List<const void *> *x8; struct Context *x9; struct HashTable<CA::Layer *, CA::Layer *> *x10; struct __CFRunLoop *x11; struct __CFRunLoopObserver *x12; struct LayoutList *x13; struct List<CA::Layer *> *x14; struct Atomic { struct { int x0; } x0; } x15; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; } *)a0;
- (void)dealloc;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (BOOL)isDrawableAvailable;
- (void)didChangeValueForKey:(id)a0;
- (BOOL)shouldArchiveValueForKey:(id)a0;
- (BOOL)_defersDidBecomeVisiblePostCommit;
- (BOOL)isDrawableAvailableInternal;
- (void)discardContents;

@end
