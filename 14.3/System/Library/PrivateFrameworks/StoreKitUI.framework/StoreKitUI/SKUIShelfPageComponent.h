@class SKUIShelfViewElement;

@interface SKUIShelfPageComponent : SKUIPageComponent

@property (readonly, nonatomic) SKUIShelfViewElement *viewElement;

- (long long)componentType;
- (id)initWithViewElement:(id)a0;

@end
