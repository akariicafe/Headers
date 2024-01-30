@class CCVegaRenderer, CCVegaHTMLElement;

@interface CCVegaJSDocument : NSObject <CCVegaJSDocumentInterface>

@property (weak, nonatomic) CCVegaRenderer *renderer;
@property (retain, nonatomic) CCVegaHTMLElement *body;

- (void).cxx_destruct;
- (id)init;
- (id)createElementWithString:(id)a0;

@end
