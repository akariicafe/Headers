@class NSString, NSAttributedString, _NSOptimalLineBreaker;

@interface NSParagraphArbitrator : NSObject {
    NSAttributedString *_attributedString;
    struct _NSRange { unsigned long long location; unsigned long long length; } _paragraphRange;
    struct __CTLine { } *_paragraphLine;
    double _textContainerWidth;
    struct UBreakIterator { } *_breaker;
    NSString *_breakerString;
    NSString *_breakerLocale;
    unsigned long long _usesOptimalLayout;
    BOOL _needsOptimalLayout;
    _NSOptimalLineBreaker *_optimalLineBreaker;
}

@property (retain) NSAttributedString *attributedString;
@property struct _NSRange { unsigned long long x0; unsigned long long x1; } paragraphRange;
@property const struct __CTLine { } *paragraphLine;
@property (copy) id /* block */ lineWidth;
@property (copy) id /* block */ validateLineBreakContext;
@property unsigned long long lineBreakStrategy;
@property double hyphenationFactor;
@property long long typesetterBehavior;
@property BOOL textContainerIsSimple;
@property double textContainerWidth;
@property struct _NSRange { unsigned long long location; unsigned long long length; } previousLineRange;
@property (copy) NSString *preferredLanguage;
@property (readonly) struct __CFStringTokenizer { } *tokenizer;
@property (readonly) BOOL mayCompressLines;

+ (id)paragraphArbitratorWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_attributedStringOverridesLineBreakBeforeIndex:(id)a0;
- (void)_computeOptimalLayout;
- (struct { unsigned long long x0; unsigned long long x1; BOOL x2; })lineBreakContextBeforeIndex:(unsigned long long)a0 lineFragmentWidth:(double)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (struct { unsigned long long x0; unsigned long long x1; BOOL x2; })_firstFitLineBreakContextBeforeIndex:(unsigned long long)a0 lineFragmentWidth:(double)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)prepareBreakIteratorForAttributedString:(id)a0 characterIndex:(unsigned long long)a1;
- (void)resetBreaker;
- (BOOL)prepareTokenizerForPreferredLanguage:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; BOOL x2; })_optimalLineBreakContextBeforeIndex:(unsigned long long)a0 lineFragmentWidth:(double)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)dealloc;
- (BOOL)_shouldUseOptimalLayout;
- (double)raggednessWithCharIndexAsLineBreak:(unsigned long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)init;
- (unsigned long long)adjustedLineBreakIndexForProposedIndex:(unsigned long long)a0;
- (void)reset;

@end
