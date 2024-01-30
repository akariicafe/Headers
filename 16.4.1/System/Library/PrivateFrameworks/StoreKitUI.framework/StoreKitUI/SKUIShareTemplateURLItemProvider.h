@class SKUIShareTemplateViewElement;

@interface SKUIShareTemplateURLItemProvider : UIActivityItemProvider {
    SKUIShareTemplateViewElement *_templateElement;
}

- (id)item;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewController:(id)a0 thumbnailImageForActivityType:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;
- (id)initWithTemplateElement:(id)a0;

@end
