@class CCVegaRenderer, CCVegaHTMLElement;

@interface CCVegaJSDocument : NSObject <CCVegaJSDocumentInterface>

@property (weak, nonatomic) CCVegaRenderer *renderer;
@property (retain, nonatomic) CCVegaHTMLElement *body;

- (id)init;
- (void).cxx_destruct;
- (id)createElementWithString:(id)a0;

@end
