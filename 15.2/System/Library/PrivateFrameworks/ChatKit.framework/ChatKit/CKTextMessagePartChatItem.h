@class NSAttributedString, NSItemProvider;

@interface CKTextMessagePartChatItem : CKMessagePartChatItem {
    NSItemProvider *_dragItemProvider;
    BOOL _shouldUseBigEmoji;
    BOOL _hasCachedBigEmoji;
}

@property (readonly, copy, nonatomic) NSAttributedString *text;
@property (readonly, copy, nonatomic) NSAttributedString *fallbackCorruptText;
@property (readonly, copy, nonatomic) NSAttributedString *subject;
@property (readonly, nonatomic) BOOL containsHyperlink;
@property (readonly, nonatomic) BOOL containsExcessiveLineHeightCharacters;
@property (readonly, nonatomic) BOOL shouldUseBigEmoji;

- (id)_time;
- (id)dragItemProvider;
- (Class)balloonViewClass;
- (id)rtfDocumentItemsWithFormatString:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)compositionWithContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)mentionsMe:(id)a0;
- (BOOL)allowsMentions;
- (id)_attributedTextWithTextColor:(id)a0;
- (BOOL)showMoneyResults;
- (id)_fallbackCorruptMessageTextWithTextColor:(id)a0;
- (Class)impactBalloonViewClass;
- (id)sendAnimationTextWithColor:(id)a0;
- (id)bodyTextFont;
- (id)meMentionsTextColor;
- (id)loadTranscriptText;

@end
