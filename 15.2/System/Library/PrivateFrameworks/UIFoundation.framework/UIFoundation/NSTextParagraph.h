@class NSDictionary, NSTextRange, NSAttributedString, NSMutableArray;

@interface NSTextParagraph : NSTextElement {
    NSAttributedString *_attributedString;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSTextRange *_paragraphContentRange;
    NSTextRange *_paragraphSeparatorRange;
    long long _resolvedBaseDirection;
    long long _fallbackBaseDirection;
    NSMutableArray *_textLayoutFragments;
    unsigned char _containsTextAttachments;
}

@property (copy) NSDictionary *attributes;
@property (readonly) NSAttributedString *attributedString;
@property (readonly) NSTextRange *paragraphContentRange;
@property (readonly) NSTextRange *paragraphSeparatorRange;

+ (id)textParagraphsForAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (void)setAttributedString:(id)a0;
- (id)attributedString;
- (struct CGSize { double x0; double x1; })estimatedIntrinsicContentSizeForTextLayoutManager:(id)a0;
- (void)setParagraphContentRange:(id)a0;
- (id)initWithAttributedString:(id)a0;
- (void)setParagraphSeparatorRange:(id)a0;
- (BOOL)_containsTextAttachments;
- (id)description;
- (long long)_resolvedBaseWritingDirectionWithFallbackDirection:(long long)a0;
- (id)initWithTextContentManager:(id)a0;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (id)init;
- (id)paragraphSeparatorRange;
- (void)synchronizeDocumentRange;
- (void)_setContainsTextAttachments:(BOOL)a0;
- (void)dealloc;
- (id)paragraphRange;
- (id)paragraphContentRange;
- (id)initWithTextAttachment:(id)a0 attributes:(id)a1;

@end
