@class SKUIDividerViewElement, NSString;

@interface SKUIDividerPageComponent : SKUIPageComponent

@property (readonly, nonatomic) SKUIDividerViewElement *viewElement;
@property (readonly, nonatomic) NSString *dividerTitle;

- (long long)componentType;
- (void).cxx_destruct;
- (id)initWithCustomPageContext:(id)a0;
- (id)initWithDividerTitle:(id)a0;
- (id)initWithViewElement:(id)a0;

@end
