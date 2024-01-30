@class NSMutableDictionary, SKUILayoutCache;

@interface SKUIViewElementTextLayoutCache : NSObject {
    NSMutableDictionary *_layoutMapTables;
}

@property (readonly, nonatomic) SKUILayoutCache *layoutCache;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_bestGuessSizeForOrdinal:(id)a0 width:(double)a1;
- (id)_bestGuessCache;
- (void)_addRequest:(id)a0 forViewElement:(id)a1;
- (struct CGSize { double x0; double x1; })_bestGuessSizeForButton:(id)a0 width:(double)a1;
- (struct CGSize { double x0; double x1; })_bestGuessSizeForLabel:(id)a0 width:(double)a1;
- (id)_createLayoutRequestForBadge:(id)a0 width:(long long)a1;
- (id)_createLayoutRequestForButton:(id)a0 attributedString:(id)a1 width:(long long)a2;
- (id)_createLayoutRequestForLabel:(id)a0 attributedString:(id)a1 width:(long long)a2;
- (id)_createLayoutRequestForOrdinal:(id)a0 attributedString:(id)a1 width:(long long)a2;
- (id)_createLayoutRequestForViewElement:(id)a0 attributedString:(id)a1 width:(long long)a2;
- (id)_existingLayoutForViewElement:(id)a0 width:(long long)a1;
- (id)_layoutIndexForViewElement:(id)a0 width:(long long)a1;
- (struct CGSize { double x0; double x1; })estimatedSizeForButton:(id)a0 width:(double)a1;
- (struct CGSize { double x0; double x1; })estimatedSizeForLabel:(id)a0 width:(double)a1;
- (struct CGSize { double x0; double x1; })estimatedSizeForOrdinal:(id)a0 width:(double)a1;
- (id)initWithLayoutCache:(id)a0;
- (void)invalidateLayoutsForUpdatedElements;
- (id)layoutForWidth:(long long)a0 viewElement:(id)a1;
- (void)requestLayoutForBadge:(id)a0 width:(long long)a1;
- (void)requestLayoutForButton:(id)a0 attributedString:(id)a1 width:(long long)a2;
- (void)requestLayoutForLabel:(id)a0 attributedString:(id)a1 width:(long long)a2;
- (void)requestLayoutForOrdinal:(id)a0 attributedString:(id)a1 width:(long long)a2;
- (void)requestLayoutForViewElement:(id)a0 attributedString:(id)a1 width:(long long)a2;
- (struct CGSize { double x0; double x1; })sizeForButton:(id)a0 width:(double)a1;
- (struct CGSize { double x0; double x1; })sizeForLabel:(id)a0 width:(double)a1;
- (struct CGSize { double x0; double x1; })sizeForViewElement:(id)a0 width:(double)a1;

@end
