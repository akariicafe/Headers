@class NSString, NSArray, SKUILimitListViewElement, SKUIPredicateListViewElement, SKUISortDescriptorListViewElement;

@interface SKUIAbstractEntityProviderViewElement : SKUIViewElement

@property (readonly, copy, nonatomic) NSString *entityTypeString;
@property (readonly, copy, nonatomic) NSArray *prefetchedProperties;
@property (readonly, nonatomic) SKUILimitListViewElement *limitListViewElement;
@property (readonly, nonatomic) SKUIPredicateListViewElement *predicateListViewElement;
@property (readonly, nonatomic) SKUISortDescriptorListViewElement *sortDescriptorListViewElement;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
