@interface ICTextFindingResult : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) double cornerRadius;
@property (nonatomic, getter=isAttachmentResult) BOOL attachmentResult;

- (long long)compare:(id)a0;
- (id)framesForHighlightInTextView:(id)a0;
- (id)viewForHighlightsInTextView:(id)a0;

@end
