@class NSString, NSMutableDictionary, CCVegaCSSStyleDeclaration, NSMutableArray, NSObject;
@protocol CCVegaHTMLElementInterface;

@interface CCVegaHTMLElement : NSObject <CCVegaHTMLElementInterface>

@property (retain, nonatomic) CCVegaCSSStyleDeclaration *style;
@property (retain, nonatomic) NSMutableArray *childNodes;
@property (retain, nonatomic) NSString *tagName;
@property (retain, nonatomic) NSMutableDictionary *events;
@property (retain, nonatomic) NSObject<CCVegaHTMLElementInterface> *parentNode;
@property (nonatomic) double clientWidth;
@property (nonatomic) double clientHeight;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTagName:(id)a0;
- (void)recursiveSetSize:(struct CGSize { double x0; double x1; })a0;
- (id)getBoundingClientRect;
- (id)removeWithChild:(id)a0;
- (id)appendWithChild:(id)a0;
- (id)prependWithChild:(id)a0;
- (void)setAttributeWithName:(id)a0 value:(id)a1;
- (void)addEventListenerWithType:(id)a0 listener:(id)a1;
- (void)removeEventListenerWithType:(id)a0 listener:(id)a1;

@end
