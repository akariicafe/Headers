@interface SKUICheckboxInputViewElement : SKUIInputViewElement {
    char _disabled;
}

@property (nonatomic, getter=isSelected) BOOL selected;

- (unsigned long long)elementType;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
