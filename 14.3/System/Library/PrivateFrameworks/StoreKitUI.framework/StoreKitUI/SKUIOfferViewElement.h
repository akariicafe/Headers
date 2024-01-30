@interface SKUIOfferViewElement : SKUIViewElement

@property (readonly, nonatomic, getter=isSimpleOffer) BOOL simpleOffer;
@property (readonly, nonatomic, getter=isCompactModeEnabled) BOOL compactModeEnabled;

- (void)enumerateChildrenUsingBlock:(id /* block */)a0;
- (long long)pageComponentType;

@end
