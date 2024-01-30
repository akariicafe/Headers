@class SKUIAccountButtonsViewElement, SKUILink;

@interface SKUIAccountButtonsComponent : SKUIPageComponent

@property (readonly, nonatomic) SKUIAccountButtonsViewElement *viewElement;
@property (retain, nonatomic) SKUILink *ECommerceLink;
@property (nonatomic) BOOL hidesTermsAndConditions;

- (long long)componentType;
- (void).cxx_destruct;
- (id)initWithCustomPageContext:(id)a0;
- (id)initWithFeaturedContentContext:(id)a0 kind:(long long)a1;
- (id)initWithViewElement:(id)a0;

@end
