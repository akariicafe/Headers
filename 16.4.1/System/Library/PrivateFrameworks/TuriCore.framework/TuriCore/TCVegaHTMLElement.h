@class NSString, NSMutableDictionary, TCVegaCSSStyleDeclaration, NSMutableArray;

@interface TCVegaHTMLElement : NSObject <TCVegaHTMLElementInterface>

@property (retain, nonatomic) TCVegaCSSStyleDeclaration *style;
@property (retain, nonatomic) NSMutableArray *childNodes;
@property (retain, nonatomic) NSString *tagName;
@property (retain, nonatomic) NSMutableDictionary *events;

- (id)init;
- (void).cxx_destruct;
- (id)parentNode;
- (void)addEventListenerWithType:(id)a0 listener:(id)a1;
- (id)appendWithChild:(id)a0;
- (id)getBoundingClientRect;
- (id)initWithTagName:(id)a0;
- (id)removeWithChild:(id)a0;
- (void)setAttributeWithName:(id)a0 value:(id)a1;

@end
