@class SKUIProgressIndicatorViewElement;

@interface SKUICarouselViewElement : SKUIViewElement

@property (readonly, nonatomic) double displayInterval;
@property (readonly, nonatomic) SKUIProgressIndicatorViewElement *progressIndicatorElement;

- (void)enumerateChildrenUsingBlock:(id /* block */)a0;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (long long)pageComponentType;

@end
