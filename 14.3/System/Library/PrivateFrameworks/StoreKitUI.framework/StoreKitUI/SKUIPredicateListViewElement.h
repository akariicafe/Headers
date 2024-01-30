@class NSArray, NSPredicate;

@interface SKUIPredicateListViewElement : SKUIViewElement {
    NSPredicate *_compoundEntityValuePredicate;
}

@property (readonly, copy, nonatomic) NSArray *predicateViewElements;
@property (readonly, nonatomic) NSPredicate *compoundEntityValuePredicate;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (void)_enumeratePredicateViewElementsUsingBlock:(id /* block */)a0;

@end
