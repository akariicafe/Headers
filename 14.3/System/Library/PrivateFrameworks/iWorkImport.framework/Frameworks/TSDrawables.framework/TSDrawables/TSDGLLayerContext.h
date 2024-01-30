@class NSString, EAGLContext;

@interface TSDGLLayerContext : NSObject <TSDGLLayerContext> {
    EAGLContext *_context;
    unsigned int _renderbuffer;
    unsigned int _framebuffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unlock;
- (void)teardown;
- (void)lock;
- (id)init;
- (void)dealloc;
- (BOOL)isValid;
- (id)glContext;
- (void)presentRenderbuffer;
- (BOOL)makeCurrentContext;
- (BOOL)createFramebufferFromLayer:(id)a0;
- (id)initWithSharedContext:(id)a0;

@end
