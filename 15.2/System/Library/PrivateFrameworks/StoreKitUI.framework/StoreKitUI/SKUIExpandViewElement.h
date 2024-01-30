@interface SKUIExpandViewElement : SKUIViewElement

@property (readonly, nonatomic, getter=isOpen) BOOL open;
@property (nonatomic) BOOL previousIsOpen;

- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (id)applyUpdatesWithElement:(id)a0;
- (long long)pageComponentType;

@end
