@class NSString;

@interface SKUIPreviewControlViewElement : SKUIViewElement {
    char _enabled;
}

@property (readonly, nonatomic) long long itemIdentifier;
@property (readonly, nonatomic) NSString *mediaURLString;

- (void).cxx_destruct;
- (BOOL)isEnabled;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (id)applyUpdatesWithElement:(id)a0;

@end
