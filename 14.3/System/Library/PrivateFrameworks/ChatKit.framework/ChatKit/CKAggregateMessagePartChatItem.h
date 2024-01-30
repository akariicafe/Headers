@class NSArray, NSString;

@interface CKAggregateMessagePartChatItem : CKTextMessagePartChatItem

@property (copy, nonatomic) NSArray *subparts;
@property (readonly, copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)rtfDocumentItemsWithFormatString:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (Class)balloonViewClass;
- (id)pasteboardItemProviders;
- (id)loadTranscriptText;
- (id)compositionWithContext:(id)a0;

@end
