@class SKUIExpandViewElement, NSMutableArray;

@interface SKUIExpandPageComponent : SKUIPageComponent {
    NSMutableArray *_childComponents;
}

@property (readonly, nonatomic) SKUIExpandViewElement *viewElement;

- (long long)componentType;
- (void).cxx_destruct;
- (id)childComponents;
- (id)childComponentForIndex:(long long)a0;
- (id)initWithViewElement:(id)a0;
- (id)metricsElementName;

@end
