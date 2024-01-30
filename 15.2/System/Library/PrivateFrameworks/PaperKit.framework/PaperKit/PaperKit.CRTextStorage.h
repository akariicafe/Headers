@class NSString;

@interface PaperKit.CRTextStorage : NSTextStorage {
    void /* unknown type, empty encoding */ mergeableString;
    void /* unknown type, empty encoding */ stringAttributes;
}

@property (nonatomic, readonly) NSString *string;

- (id)initWithString:(id)a0;
- (id)initWithContentsOfMarkdownFileAtURL:(id)a0 options:(id)a1 baseURL:(id)a2 error:(id *)a3;
- (id)initWithMarkdownString:(id)a0 options:(id)a1 baseURL:(id)a2 error:(id *)a3;
- (id)initWithData:(id)a0 options:(id)a1 documentAttributes:(id *)a2 error:(id *)a3;
- (id)initWithAttributedString:(id)a0;
- (id)initWithMarkdown:(id)a0 options:(id)a1 baseURL:(id)a2 error:(id *)a3;
- (id)initWithFileURL:(id)a0 options:(id)a1 documentAttributes:(id *)a2 error:(id *)a3;
- (id)initWithAttachment:(id)a0 attributes:(id)a1;
- (id)initWithURL:(id)a0 options:(id)a1 documentAttributes:(id *)a2 error:(id *)a3;
- (id)attributesAtIndex:(long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
