@class SKUIAccountButtonsViewElement, SKUILink;

@interface SKUIAccountButtonsComponent : SKUIPageComponent

@property (readonly, nonatomic) SKUIAccountButtonsViewElement *viewElement;
@property (retain, nonatomic) SKUILink *ECommerceLink;
@property (nonatomic) BOOL hidesTermsAndConditions;

- (void).cxx_destruct;
- (long long)componentType;
- (id)initWithViewElement:(id)a0;
- (id)initWithCustomPageContext:(id)a0;
- (id)initWithFeaturedContentContext:(id)a0 kind:(long long)a1;

@end
