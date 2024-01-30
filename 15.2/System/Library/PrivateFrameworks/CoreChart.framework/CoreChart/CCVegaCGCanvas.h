@class CCVegaCGContext;

@interface CCVegaCGCanvas : CCVegaHTMLElement <CCVegaCGCanvasInterface>

@property (retain, nonatomic) CCVegaCGContext *context;
@property double width;
@property double height;

- (void).cxx_destruct;
- (id)init;
- (id)getContext:(id)a0;

@end
