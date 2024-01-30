@class SKUIDividerViewElement, NSString, NSArray;

@interface SKUISegmentedControlViewElement : SKUIViewElement

@property (readonly, nonatomic) SKUIDividerViewElement *bottomDivider;
@property (readonly, nonatomic) long long initialSelectedItemIndex;
@property (readonly, nonatomic) long long maximumNumberOfVisibleItems;
@property (readonly, nonatomic) NSString *moreListTitle;
@property (readonly, nonatomic) NSArray *segmentItemTitles;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (id)applyUpdatesWithElement:(id)a0;
- (long long)pageComponentType;
- (void)dispatchEventOfType:(unsigned long long)a0 forItemAtIndex:(long long)a1;
- (void)_enumerateItemElementsUsingBlock:(id /* block */)a0;

@end
