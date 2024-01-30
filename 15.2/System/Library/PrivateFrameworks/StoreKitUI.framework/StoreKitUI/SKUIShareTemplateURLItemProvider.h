@class SKUIShareTemplateViewElement;

@interface SKUIShareTemplateURLItemProvider : UIActivityItemProvider {
    SKUIShareTemplateViewElement *_templateElement;
}

- (id)activityViewController:(id)a0 thumbnailImageForActivityType:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (void).cxx_destruct;
- (id)item;
- (id)initWithTemplateElement:(id)a0;

@end
