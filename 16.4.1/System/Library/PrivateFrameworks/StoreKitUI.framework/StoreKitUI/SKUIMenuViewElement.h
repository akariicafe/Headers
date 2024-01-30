@class NSArray, SKUILabelViewElement, SKUIItemViewElement;

@interface SKUIMenuViewElement : SKUIViewElement {
    char _enabled;
}

@property (readonly, nonatomic) NSArray *menuItemTitles;
@property (readonly, nonatomic) SKUILabelViewElement *menuLabel;
@property (readonly, nonatomic) long long selectedItemIndex;
@property (readonly, nonatomic) SKUIItemViewElement *titleItem;

- (BOOL)isEnabled;
- (void).cxx_destruct;
- (void)_enumerateItemElementsUsingBlock:(id /* block */)a0;
- (id)applyUpdatesWithElement:(id)a0;
- (void)dispatchEventOfType:(unsigned long long)a0 forItemAtIndex:(long long)a1;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
