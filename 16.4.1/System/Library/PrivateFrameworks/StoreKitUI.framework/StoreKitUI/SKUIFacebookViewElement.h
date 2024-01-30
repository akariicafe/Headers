@class NSString;

@interface SKUIFacebookViewElement : SKUIViewElement

@property (readonly, nonatomic) long long facebookType;
@property (readonly, nonatomic) NSString *URLString;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (long long)pageComponentType;

@end
