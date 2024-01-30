@class NSString, DOMAbstractView, DOMDocument, WebFrame;

@interface DOMHTMLFrameElement : DOMHTMLElement

@property (readonly, nonatomic) WebFrame *contentFrame;
@property (copy) NSString *frameBorder;
@property (copy) NSString *longDesc;
@property (copy) NSString *marginHeight;
@property (copy) NSString *marginWidth;
@property (copy) NSString *name;
@property BOOL noResize;
@property (copy) NSString *scrolling;
@property (copy) NSString *src;
@property (readonly) DOMDocument *contentDocument;
@property (readonly) DOMAbstractView *contentWindow;
@property (copy) NSString *location;
@property (readonly) int width;
@property (readonly) int height;

- (int)structuralComplexityContribution;

@end
