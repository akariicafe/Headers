@class CCVegaCGContext;

@interface CCVegaCGCanvas : CCVegaHTMLElement <CCVegaCGCanvasInterface>

@property (retain, nonatomic) CCVegaCGContext *context;
@property double width;
@property double height;

- (id)init;
- (void).cxx_destruct;
- (id)getContext:(id)a0;

@end
