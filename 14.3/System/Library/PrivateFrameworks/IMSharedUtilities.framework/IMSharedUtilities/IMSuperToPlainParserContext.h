@class NSString, NSMutableString;

@interface IMSuperToPlainParserContext : IMFromSuperParserContext {
    NSMutableString *_plainString;
    BOOL _extractLinks;
}

@property (readonly, nonatomic) NSString *plainString;
@property (readonly, nonatomic) NSMutableString *mutablePlainString;

- (id)initWithAttributedString:(id)a0;
- (void)dealloc;
- (id)name;
- (id)initWithAttributedString:(id)a0 extractLinks:(BOOL)a1;
- (id)resultsForLogging;
- (void)parser:(id)a0 foundAttributes:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 characters:(id)a3;

@end
