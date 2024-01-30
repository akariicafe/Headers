@class NSString, NSMutableDictionary, TCVegaCSSStyleDeclaration, NSMutableArray;

@interface TCVegaHTMLElement : NSObject <TCVegaHTMLElementInterface>

@property (retain, nonatomic) TCVegaCSSStyleDeclaration *style;
@property (retain, nonatomic) NSMutableArray *childNodes;
@property (retain, nonatomic) NSString *tagName;
@property (retain, nonatomic) NSMutableDictionary *events;

- (id)parentNode;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTagName:(id)a0;
- (id)getBoundingClientRect;
- (id)removeWithChild:(id)a0;
- (id)appendWithChild:(id)a0;
- (void)setAttributeWithName:(id)a0 value:(id)a1;
- (void)addEventListenerWithType:(id)a0 listener:(id)a1;

@end
