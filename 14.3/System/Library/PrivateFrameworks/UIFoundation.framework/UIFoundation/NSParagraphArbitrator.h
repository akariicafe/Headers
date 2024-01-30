@class NSString, NSAttributedString;

@interface NSParagraphArbitrator : NSObject {
    struct UBreakIterator { } *_breaker;
    NSString *_breakerString;
    NSString *_breakerLocale;
}

@property (retain) NSAttributedString *attributedString;
@property struct _NSRange { unsigned long long location; unsigned long long length; } paragraphRange;
@property (copy) id /* block */ lineWidth;
@property (copy) id /* block */ validateLineBreakContext;
@property unsigned long long lineBreakStrategy;
@property double hyphenationFactor;
@property long long typesetterBehavior;
@property struct _NSRange { unsigned long long location; unsigned long long length; } previousLineRange;
@property (copy) NSString *preferredLanguage;
@property (readonly) struct __CFStringTokenizer { } *tokenizer;

+ (id)paragraphArbitratorWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (unsigned long long)adjustedLineBreakIndexForProposedIndex:(unsigned long long)a0;
- (id)init;
- (void)reset;
- (void)dealloc;
- (BOOL)prepareBreakIteratorForAttributedString:(id)a0 characterIndex:(unsigned long long)a1;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct { unsigned long long x0; unsigned long long x1; BOOL x2; })lineBreakContextBeforeIndex:(unsigned long long)a0 lineFragmentWidth:(double)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)resetBreaker;
- (BOOL)prepareTokenizerForPreferredLanguage:(id)a0;

@end
