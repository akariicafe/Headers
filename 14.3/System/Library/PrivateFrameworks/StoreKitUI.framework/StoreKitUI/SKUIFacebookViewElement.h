@class NSString;

@interface SKUIFacebookViewElement : SKUIViewElement

@property (readonly, nonatomic) long long facebookType;
@property (readonly, nonatomic) NSString *URLString;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (id)applyUpdatesWithElement:(id)a0;
- (long long)pageComponentType;

@end
