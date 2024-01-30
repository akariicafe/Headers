@class SKUIViewElementText;

@interface SKUIStarRatingViewElement : SKUIViewElement {
    BOOL _enabled;
}

@property (readonly, nonatomic) long long starType;
@property (readonly, nonatomic) float ratingValue;
@property (readonly, nonatomic) SKUIViewElementText *text;

- (void).cxx_destruct;
- (BOOL)isEnabled;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (id)applyUpdatesWithElement:(id)a0;

@end
