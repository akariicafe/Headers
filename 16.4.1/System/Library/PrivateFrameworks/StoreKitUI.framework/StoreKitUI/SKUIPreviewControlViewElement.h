@class NSString;

@interface SKUIPreviewControlViewElement : SKUIViewElement {
    char _enabled;
}

@property (readonly, nonatomic) long long itemIdentifier;
@property (readonly, nonatomic) NSString *mediaURLString;

- (BOOL)isEnabled;
- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
