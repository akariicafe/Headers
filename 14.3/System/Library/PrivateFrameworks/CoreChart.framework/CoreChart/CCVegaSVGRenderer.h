@class CCVegaCGContext;

@interface CCVegaSVGRenderer : NSObject

@property (retain) CCVegaCGContext *cgCanvas;

+ (id)getInstance;

- (void).cxx_destruct;
- (struct CGPath { } *)newPathFromJSFunction:(id)a0 item:(id)a1;
- (struct CGPath { } *)newPathFromParsedPath:(id)a0 size:(double)a1 rendererContext:(id)a2;
- (id)parseString:(id)a0 rendererContext:(id)a1;

@end
