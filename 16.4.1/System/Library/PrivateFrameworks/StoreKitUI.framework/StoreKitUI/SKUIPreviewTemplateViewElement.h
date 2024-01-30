@class NSString, SKUILockupViewElement;

@interface SKUIPreviewTemplateViewElement : SKUIViewElement

@property (readonly, nonatomic) long long itemIdentifier;
@property (readonly, nonatomic) SKUILockupViewElement *previewLockup;
@property (readonly, nonatomic) NSString *previewURLString;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
