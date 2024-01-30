@class EAGLContext, NSMutableDictionary, UIImage;
@protocol GLKViewDelegate;

@interface GLKView : UIView <NSCoding>

@property (nonatomic) BOOL inDraw;
@property (retain, nonatomic) NSMutableDictionary *drawableProperties;
@property (nonatomic) BOOL shouldDeleteFramebuffer;
@property (nonatomic) unsigned int resolveFramebuffer;
@property (nonatomic) unsigned int resolveColorRenderbuffer;
@property (nonatomic) unsigned int multisampleFramebuffer;
@property (nonatomic) unsigned int multisampleColorRenderbuffer;
@property (nonatomic) unsigned int depthRenderbuffer;
@property (nonatomic) unsigned int stencilRenderbuffer;
@property (nonatomic) unsigned int depthStencilRenderbuffer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewBounds;
@property (nonatomic) double viewContentScaleFactor;
@property (nonatomic) void /* function */ *drawRectIMP;
@property (nonatomic) id<GLKViewDelegate> delegate;
@property (retain, nonatomic) EAGLContext *context;
@property (readonly, nonatomic) long long drawableWidth;
@property (readonly, nonatomic) long long drawableHeight;
@property (nonatomic) int drawableColorFormat;
@property (nonatomic) int drawableDepthFormat;
@property (nonatomic) int drawableStencilFormat;
@property (nonatomic) int drawableMultisample;
@property (readonly) UIImage *snapshot;
@property (nonatomic) BOOL enableSetNeedsDisplay;

+ (Class)layerClass;

- (void)_initCommon;
- (void)dealloc;
- (BOOL)_canDrawContent;
- (void)display;
- (void)displayLayer:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;
- (BOOL)_controlsOwnScaleFactor;
- (void)setContentScaleFactor:(double)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (void)_deleteFramebuffer;
- (void)_createFramebuffer;
- (void)_setFramebuffer:(BOOL *)a0;
- (void)_resolveAndDiscard;
- (BOOL)_presentFramebuffer;
- (void)_display:(BOOL)a0;
- (void)deleteDrawable;
- (void)bindDrawable;

@end
