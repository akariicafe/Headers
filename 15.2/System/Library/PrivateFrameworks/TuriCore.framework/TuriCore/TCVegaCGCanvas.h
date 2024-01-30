@class TCVegaCGContext;

@interface TCVegaCGCanvas : TCVegaHTMLElement <TCVegaCGCanvasInterface>

@property (retain, nonatomic) TCVegaCGContext *context;
@property double width;
@property double height;

- (void).cxx_destruct;
- (id)init;
- (id)getContext:(id)a0;

@end
