@class NSDictionary;

@interface SKUIEntityProviderListViewElement : SKUIViewElement {
    NSDictionary *_entityProviders;
}

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (id)entityProviderWithIdentifier:(id)a0;

@end
