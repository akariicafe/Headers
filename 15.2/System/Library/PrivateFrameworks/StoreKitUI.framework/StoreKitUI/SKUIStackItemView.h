@class SKUIStackItemViewElement, NSArray, SKUIViewElementLayoutContext, SKUIAttributedStringView, NSMapTable, NSString;

@interface SKUIStackItemView : SKUIViewReuseView <SKUIViewElementView>

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (retain, nonatomic) SKUIStackItemViewElement *viewElement;
@property (retain, nonatomic) SKUIViewElementLayoutContext *lastContext;
@property (retain, nonatomic) SKUIAttributedStringView *textView;
@property (copy, nonatomic) NSArray *imageViews;
@property (retain, nonatomic) NSMapTable *imageViewToImageResourceCacheKey;
@property (readonly, nonatomic) unsigned long long numberOfLines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)prefetchResourcesForViewElement:(id)a0 reason:(long long)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })preferredSizeForViewElement:(id)a0 context:(id)a1;
+ (void)requestLayoutForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2;
+ (id)_attributedStringForLabel:(id)a0 context:(id)a1;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2 numberOfLines:(unsigned long long *)a3;
+ (id)_textViewLayoutWithWidth:(double)a0 string:(id)a1;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (unsigned long long)numberOfLines;
- (void)reloadWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (BOOL)updateWithItemState:(id)a0 context:(id)a1 animated:(BOOL)a2;
- (id)viewForElementIdentifier:(id)a0;

@end
