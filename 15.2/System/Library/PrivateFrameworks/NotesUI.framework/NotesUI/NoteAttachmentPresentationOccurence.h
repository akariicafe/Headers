@class NoteAttachmentPresentation, DOMHTMLElement;

@interface NoteAttachmentPresentationOccurence : NSObject

@property (readonly, nonatomic) NoteAttachmentPresentation *presentation;
@property (readonly, nonatomic) DOMHTMLElement *element;

- (id)previewItemTitle;
- (id)previewItemURL;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPresentation:(id)a0 element:(id)a1;

@end
