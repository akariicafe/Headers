@class NSString, LPLinkHTMLGenerator, DOMElement, NSMutableArray;

@interface LPHTMLComponent : NSObject {
    NSMutableArray *_children;
}

@property (readonly, weak, nonatomic) LPLinkHTMLGenerator *generator;
@property (readonly, nonatomic) DOMElement *element;
@property (readonly, nonatomic) NSString *themePath;

+ (id)ruleDictionaryForStyle:(id)a0;

- (void)addChild:(id)a0;
- (void).cxx_destruct;
- (id)childThemePathWithName:(id)a0;
- (id)initWithTagName:(id)a0 themePath:(id)a1 generator:(id)a2;

@end
