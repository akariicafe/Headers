@class ICInlineAttachment, NSAttributedString;

@interface ICInlineTextFindingResult : ICTextFindingResult

@property (weak, nonatomic) ICInlineAttachment *attachment;
@property (retain, nonatomic) NSAttributedString *findableString;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } displayTextRange;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)framesForHighlightInTextView:(id)a0;
- (id)inlineAttachmentViewControllerInTextView:(id)a0;
- (id)viewForHighlightsInTextView:(id)a0;

@end
