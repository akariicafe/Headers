@class SKUIViewReusePool, NSMapTable, NSMutableArray;

@interface SKUIViewModification : NSObject {
    SKUIViewReusePool *_viewPool;
}

@property (readonly, copy, nonatomic) NSMapTable *allViewTextProperties;
@property (readonly, nonatomic) NSMutableArray *views;

- (void).cxx_destruct;
- (void)addView:(id)a0;
- (id)_attributedStringViewForLayout:(id)a0;
- (id)_addImageViewWithReuseIdentifier:(id)a0 viewElement:(id)a1 context:(id)a2;
- (id)_itemStateForButton:(id)a0;
- (void)_styleItemOfferButton:(id)a0 forElement:(id)a1 context:(id)a2;
- (id)addBadgeViewWithElement:(id)a0 width:(double)a1 context:(id)a2;
- (id)addBarRatingWithElement:(id)a0 width:(double)a1 context:(id)a2;
- (id)addButtonWithElement:(id)a0 width:(double)a1 context:(id)a2;
- (id)addDividerWithElement:(id)a0 context:(id)a1;
- (id)addHeaderViewWithElement:(id)a0 width:(double)a1 context:(id)a2;
- (id)addHorizontalListWithElement:(id)a0 width:(double)a1 context:(id)a2;
- (id)addHorizontalLockupWithElement:(id)a0 width:(double)a1 context:(id)a2;
- (id)addImageDeckViewWithElement:(id)a0 width:(double)a1 context:(id)a2;
- (id)addImageGridViewWithElement:(id)a0 width:(double)a1 context:(id)a2;
- (id)addImageViewWithElement:(id)a0 context:(id)a1;
- (id)addImageViewWithVideoElement:(id)a0 context:(id)a1;
- (id)addLabelViewWithElement:(id)a0 width:(double)a1 context:(id)a2;
- (id)addLabelViewWithOrdinalElement:(id)a0 width:(double)a1 context:(id)a2;
- (id)addMenuButtonWithTitleItem:(id)a0 width:(double)a1 context:(id)a2;
- (id)addOfferViewWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (id)addResponseViewWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (id)addReusableViewWithReuseIdentifier:(id)a0;
- (id)addReviewListTitleViewWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (id)addStackItemViewWithElement:(id)a0 width:(double)a1 context:(id)a2;
- (id)addStackListViewWithElement:(id)a0 width:(double)a1 context:(id)a2;
- (id)addStarRatingControlViewWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (id)addStarRatingViewWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (id)addTabularLockupWithElement:(id)a0 width:(double)a1 context:(id)a2;
- (id)addTextViewWithElement:(id)a0 width:(double)a1 context:(id)a2;
- (id)addTomatoRatingViewWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (id)initWithViewReusePool:(id)a0;
- (void)setTextProperties:(id)a0 forView:(id)a1;

@end
