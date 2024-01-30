@class NSString, SKUIItem;

@interface SKUIGiftTemplateViewElement : SKUIViewElement {
    NSString *_productBuyParams;
    long long _productItemIdentifier;
}

@property (readonly, nonatomic) long long giftType;
@property (readonly, nonatomic) SKUIItem *productItem;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
