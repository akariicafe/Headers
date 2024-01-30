@class SKUICardViewElement, SKUIViewElementLayoutContext;

@interface SKUICardLayout : NSObject {
    BOOL _hasBackground;
}

@property (readonly, nonatomic) SKUICardViewElement *cardViewElement;
@property (readonly, nonatomic) SKUIViewElementLayoutContext *layoutContext;
@property (readonly, nonatomic) double horizontalContentInset;
@property (readonly, nonatomic) long long layoutStyle;

+ (id)layoutWithCardViewElement:(id)a0 context:(id)a1;
+ (BOOL)allowsViewElement:(id)a0;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForViewElement:(id)a0 width:(double)a1;
- (id)attributedStringForButton:(id)a0;
- (id)attributedStringForLabel:(id)a0;
- (double)topInsetForViewElement:(id)a0 previousViewElement:(id)a1 width:(double)a2;
- (double)bottomInsetForLastViewElement:(id)a0 width:(double)a1;

@end
