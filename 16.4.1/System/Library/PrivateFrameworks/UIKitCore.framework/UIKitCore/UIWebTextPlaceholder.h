@class DOMElement, UIWebDocumentView;

@interface UIWebTextPlaceholder : UITextPlaceholder {
    UIWebDocumentView *_webDocumentView;
}

@property (retain, nonatomic) DOMElement *element;

+ (id)placeholderWithWebDocumentView:(id)a0;

- (id)rects;
- (void)dealloc;

@end
