@class CCVegaCARenderer, NSString;

@interface CCVegaCARendererWrapper : NSObject <CCVegaCARendererJSExport>

@property (weak) CCVegaCARenderer *renderer;
@property (retain) NSString *backgroundColor;

- (void)dirty;
- (id)initWithRenderer:(id)a0;
- (void)render:(id)a0;
- (void).cxx_destruct;
- (void)dirtyAll;
- (void)resizeWidth:(double)a0 height:(double)a1 originX:(double)a2 originY:(double)a3;

@end
