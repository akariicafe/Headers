@class SKUICollectionDOMFeature;

@interface SKUIGridViewElement : SKUIViewElement {
    id _persistenceKey;
}

@property (readonly, nonatomic) BOOL allowsMultipleSelectionDuringEditing;
@property (readonly, nonatomic) BOOL showsEditMode;
@property (readonly, nonatomic) SKUICollectionDOMFeature *collectionFeature;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)persistenceKey;
- (void)enumerateChildrenUsingBlock:(id /* block */)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (id)applyUpdatesWithElement:(id)a0;
- (long long)pageComponentType;
- (long long)_countOfInputCheckboxesWithBaseElement:(id)a0 limit:(long long)a1;

@end
