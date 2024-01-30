@class RBDisplayList;
@protocol MTLDevice;

@interface RBSurface : NSObject {
    struct objc_ptr<RBDisplayList *> { RBDisplayList *_p; } _displayList;
    struct refcounted_ptr<RB::Drawable> { struct Drawable *_p; } _drawable;
    struct objc_ptr<id<MTLDevice>> { id<MTLDevice> _p; } _device;
    struct refcounted_ptr<RB::Texture> { struct Texture *_p; } _texture;
    void *_lastItem;
    struct Bounds { void /* unknown type, empty encoding */ origin; void /* unknown type, empty encoding */ size; } _dirty;
}

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double scale;
@property (nonatomic) int colorMode;
@property (nonatomic) BOOL clearsBackground;
@property (nonatomic) struct { float red; float green; float blue; float alpha; } clearColor;
@property (nonatomic, getter=isOpaque) BOOL opaque;
@property (retain, nonatomic) RBDisplayList *displayList;

- (id).cxx_construct;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (struct CGImage { } *)copyCGImageUsingDevice:(id)a0;
- (void)setDisplayList:(id)a0 dirtyRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateUsingDevice:(id)a0;

@end
