@class NSString, RVQuery, NSURL, DDScannerResult;

@interface RVItem : NSObject <NSSecureCoding> {
    BOOL _normalized;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long normalizedType;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) DDScannerResult *ddResult;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *contactPropertyValue;
@property (readonly, nonatomic) long long contactPropertyType;
@property (readonly, nonatomic) long long selectionType;
@property (readonly, nonatomic) NSString *textSearchContext;
@property (retain, nonatomic) NSString *leadingText;
@property (retain, nonatomic) NSString *trailingText;
@property (retain, nonatomic) NSString *originalSelectedText;
@property (readonly, nonatomic) RVQuery *query;
@property (copy, nonatomic) id /* block */ textQueryProvider;
@property (copy, nonatomic) id /* block */ reportAnIssueBlock;
@property (copy, nonatomic) id /* block */ reportAnIssueExtendedBlock;
@property (copy, nonatomic) id /* block */ reportAnIssueMetadataFetchingBlock;
@property (copy, nonatomic) id /* block */ lookupContextFetchingBlock;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } highlightRange;
@property (readonly, nonatomic) NSURL *normalizedURL;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) id clientHints;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithText:(id)a0 clickedIndex:(unsigned long long)a1 selectionRanges:(id)a2 shouldUpdateSelection:(BOOL *)a3;
- (id)initWithText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)normalize;
- (id)initWithDDResult:(id)a0;
- (id)initWithURL:(id)a0 rangeInContext:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithSearchQuery:(id)a0 rangeInContext:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)normalizeWithParser:(id /* block */)a0 lookupOnly:(BOOL)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textSearchRange;
- (void)commonInitWithText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 customURLParser:(id /* block */)a2 lookup:(BOOL)a3;
- (id)constrainContextSubstring:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 leading:(BOOL)a2;
- (id)getClientHintKey:(id)a0 ofType:(Class)a1;
- (id)initWithClientIdentifier:(id)a0 rangeInContext:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithContactProperty:(long long)a0 value:(id)a1 rangeInContext:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 customURLParser:(id /* block */)a2;

@end
