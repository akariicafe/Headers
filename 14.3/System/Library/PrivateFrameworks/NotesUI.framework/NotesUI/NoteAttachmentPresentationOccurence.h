@class NSString, NoteAttachmentPresentation, NSURL, DOMHTMLElement;

@interface NoteAttachmentPresentationOccurence : NSObject <QLPreviewItem>

@property (readonly, nonatomic) NoteAttachmentPresentation *presentation;
@property (readonly, nonatomic) DOMHTMLElement *element;
@property (readonly, nonatomic) NSURL *previewItemURL;
@property (readonly, nonatomic) NSString *previewItemTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPresentation:(id)a0 element:(id)a1;

@end
