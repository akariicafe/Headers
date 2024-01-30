@class NSString;

@interface _NSCGTextGraphicsContext : NSObject <NSTextGraphicsContextInternal> {
    struct CGContext { } *_context;
}

@property (readonly) struct CGContext { } *CGContext;
@property (readonly, getter=isFlipped) BOOL flipped;
@property (readonly, getter=isDrawingToScreen) BOOL drawingToScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)graphicsContextForApplicationFrameworkContext:(long long)a0;

- (void)restoreGraphicsState;
- (void)saveGraphicsState;
- (void)dealloc;
- (void)becomeCurrentGraphicsContextDuringBlock:(id /* block */)a0;
- (id)initWithCGContext:(struct CGContext { } *)a0;

@end
