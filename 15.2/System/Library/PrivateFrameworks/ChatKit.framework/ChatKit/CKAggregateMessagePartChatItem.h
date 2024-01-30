@class NSArray, NSString;

@interface CKAggregateMessagePartChatItem : CKTextMessagePartChatItem

@property (copy, nonatomic) NSArray *subparts;
@property (readonly, copy, nonatomic) NSString *title;

- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (Class)balloonViewClass;
- (id)rtfDocumentItemsWithFormatString:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)compositionWithContext:(id)a0;
- (void).cxx_destruct;
- (id)pasteboardItemProviders;
- (id)loadTranscriptText;

@end
