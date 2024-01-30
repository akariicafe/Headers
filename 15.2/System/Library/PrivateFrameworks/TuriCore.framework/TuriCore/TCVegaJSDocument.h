@class TCVegaCGCanvas, TCVegaHTMLElement;

@interface TCVegaJSDocument : NSObject <TCVegaJSDocumentInterface>

@property (retain) TCVegaCGCanvas *canvas;
@property (retain, nonatomic) TCVegaHTMLElement *body;

- (void).cxx_destruct;
- (id)initWithCanvas:(id)a0;
- (id)createElementWithString:(id)a0;

@end
