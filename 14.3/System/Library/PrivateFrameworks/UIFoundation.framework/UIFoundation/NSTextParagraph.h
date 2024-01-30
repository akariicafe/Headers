@class NSTextDataProvider, NSDictionary, NSTextRange, NSAttributedString, NSMutableArray;

@interface NSTextParagraph : NSTextElement {
    NSAttributedString *_attributedString;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSTextRange *_paragraphContentRange;
    NSTextRange *_paragraphSeparatorRange;
    long long _resolvedBaseDirection;
    long long _fallbackBaseDirection;
    NSTextDataProvider *_textDataProvider;
    NSMutableArray *_textLayoutFragments;
}

@property (copy) NSDictionary *attributes;
@property (readonly, copy) NSAttributedString *attributedString;
@property (readonly) NSTextRange *paragraphContentRange;
@property (readonly) NSTextRange *paragraphSeparatorRange;

+ (id)textParagraphsForAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (id)initWithString:(id)a0 attributes:(id)a1;
- (id)paragraphSeparatorRange;
- (long long)_resolvedBaseWritingDirectionWithFallbackDirection:(long long)a0;
- (id)paragraphContentRange;
- (id)init;
- (id)initWithTextContentManager:(id)a0;
- (void)setTextDataProvider:(id)a0;
- (void)setParagraphContentRange:(id)a0;
- (void)setParagraphSeparatorRange:(id)a0;
- (void)synchronizeDocumentRange;
- (id)textDataProvider;
- (id)attributedString;
- (id)initWithAttributedString:(id)a0;
- (void)dealloc;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)description;
- (id)paragraphRange;
- (void)setAttributedString:(id)a0;
- (struct CGSize { double x0; double x1; })estimatedIntrinsicContentSizeForTextLayoutManager:(id)a0;

@end
