@class GLKView, UIDynamicAnimator, NSString, EAGLContext, GLKBaseEffect;

@interface UIDynamicsDebug : NSObject <GLKViewDelegate> {
    unsigned int _vertexBuffer;
    struct { struct { float x; float y; } position; void /* unknown type, empty encoding */ color; } _vertices[42000];
    GLKBaseEffect *_effect;
    EAGLContext *_ctx;
}

@property (weak, nonatomic) UIDynamicAnimator *animator;
@property (retain, nonatomic) GLKView *debugView;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL showPhysics;
@property (nonatomic) BOOL showOutlineInterior;
@property (nonatomic) BOOL showFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAnimator:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setNeedsDisplay;
- (void)dealloc;
- (void)captureDebugInformation;
- (void)_teardownDebugView;
- (void)_setupDebugViewIfNeccessary;
- (void)glkView:(id)a0 drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
