@class NSString, DOMAbstractView, DOMDocument, WebFrame;

@interface DOMHTMLIFrameElement : DOMHTMLElement

@property (readonly, nonatomic) WebFrame *contentFrame;
@property (copy) NSString *align;
@property (copy) NSString *frameBorder;
@property (copy) NSString *height;
@property (copy) NSString *longDesc;
@property (copy) NSString *marginHeight;
@property (copy) NSString *marginWidth;
@property (copy) NSString *name;
@property (copy) NSString *scrolling;
@property (copy) NSString *src;
@property (copy) NSString *width;
@property (readonly) DOMDocument *contentDocument;
@property (readonly) DOMAbstractView *contentWindow;

- (id)sandbox;
- (void)setSandbox:(id)a0;
- (void)setSrcdoc:(id)a0;
- (id)srcdoc;
- (int)structuralComplexityContribution;

@end
