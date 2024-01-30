@class SKUIShareTemplateViewElement, SKUIClientContext;

@interface SKUIShareTemplateTextItemProvider : UIActivityItemProvider {
    SKUIClientContext *_clientContext;
    SKUIShareTemplateViewElement *_templateElement;
}

- (id)item;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)initWithTemplateElement:(id)a0 clientContext:(id)a1;

@end
