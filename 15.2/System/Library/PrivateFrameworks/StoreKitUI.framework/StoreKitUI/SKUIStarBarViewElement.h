@interface SKUIStarBarViewElement : SKUIViewElement

@property (readonly, nonatomic) long long numberOfRatings;
@property (readonly, nonatomic) long long numberOfStars;
@property (readonly, nonatomic) float value;

- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (id)applyUpdatesWithElement:(id)a0;

@end
