@class SKUIClientContext;

@interface SKUIHandleRulesSettingsHeaderFooterDescription : SKUISettingsHeaderFooterDescription {
    SKUIClientContext *_clientContext;
}

@property (nonatomic) BOOL showInvalid;

- (id)text;
- (void).cxx_destruct;
- (Class)_viewClassForSettingsHeaderFooterDescription:(id)a0;
- (id)initWithClientContext:(id)a0;

@end
