@interface SKUICheckboxInputViewElement : SKUIInputViewElement {
    char _disabled;
}

@property (nonatomic, getter=isSelected) BOOL selected;

- (unsigned long long)elementType;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (id)applyUpdatesWithElement:(id)a0;

@end
