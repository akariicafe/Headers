@class SKUIClientContext;

@interface SKUIHandleRulesSettingsHeaderFooterDescription : SKUISettingsHeaderFooterDescription {
    SKUIClientContext *_clientContext;
}

@property (nonatomic) BOOL showInvalid;

- (void).cxx_destruct;
- (id)text;
- (id)initWithClientContext:(id)a0;
- (Class)_viewClassForSettingsHeaderFooterDescription:(id)a0;

@end
