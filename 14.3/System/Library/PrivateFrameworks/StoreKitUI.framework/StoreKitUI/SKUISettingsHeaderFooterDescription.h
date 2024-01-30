@class SKUIViewElement;

@interface SKUISettingsHeaderFooterDescription : NSObject {
    SKUIViewElement *_viewElement;
}

+ (id)_settingsHeaderFooterDescriptionWithHeaderElement:(id)a0;
+ (id)_settingsHeaderFooterDescriptionWithFooterElement:(id)a0;
+ (id)settingsHeaderFooterDescriptionWithViewElement:(id)a0;
+ (Class)viewClassForSettingsHeaderFooterDescription:(id)a0;

- (void).cxx_destruct;
- (id)viewElement;
- (id)initWithViewElement:(id)a0;
- (Class)_viewClassForSettingsHeaderFooterDescription:(id)a0;

@end
