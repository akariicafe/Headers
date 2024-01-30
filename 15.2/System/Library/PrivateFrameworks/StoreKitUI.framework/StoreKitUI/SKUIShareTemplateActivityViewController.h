@class SKUIShareTemplateViewElement, SKUIClientContext;

@interface SKUIShareTemplateActivityViewController : UIActivityViewController {
    SKUIClientContext *_clientContext;
    SKUIShareTemplateViewElement *_templateElement;
}

- (void).cxx_destruct;
- (id)_titleForActivity:(id)a0;
- (id)_activityItemsWithTemplateElement:(id)a0 clientContext:(id)a1;
- (id)_applicationActivitiesWithTemplateElement:(id)a0 clientContext:(id)a1;
- (id)initWithTemplateElement:(id)a0 clientContext:(id)a1;

@end
