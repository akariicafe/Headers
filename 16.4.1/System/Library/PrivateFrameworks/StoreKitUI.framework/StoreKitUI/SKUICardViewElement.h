@interface SKUICardViewElement : SKUIViewElement {
    char _enabled;
}

@property (readonly, nonatomic) long long cardType;
@property (readonly, nonatomic, getter=isAdCard) BOOL adCard;

- (BOOL)isEnabled;
- (void)enumerateChildrenUsingBlock:(id /* block */)a0;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (long long)pageComponentType;

@end
