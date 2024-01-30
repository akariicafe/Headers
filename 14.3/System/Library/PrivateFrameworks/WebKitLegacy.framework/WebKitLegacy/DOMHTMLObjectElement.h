@class DOMHTMLFormElement, NSString, NSURL, DOMDocument, WebFrame;

@interface DOMHTMLObjectElement : DOMHTMLElement

@property (readonly, nonatomic) WebFrame *contentFrame;
@property (readonly) DOMHTMLFormElement *form;
@property (copy) NSString *code;
@property (copy) NSString *align;
@property (copy) NSString *archive;
@property (copy) NSString *border;
@property (copy) NSString *codeBase;
@property (copy) NSString *codeType;
@property (copy) NSString *data;
@property BOOL declare;
@property (copy) NSString *height;
@property int hspace;
@property (copy) NSString *name;
@property (copy) NSString *standby;
@property (copy) NSString *type;
@property (copy) NSString *useMap;
@property int vspace;
@property (copy) NSString *width;
@property (readonly) DOMDocument *contentDocument;
@property (readonly, copy) NSURL *absoluteImageURL;

@end
