@class NSArray, NSString;

@interface AXSSDocumentTextRuleBasic : AXSSDocumentTextRule

@property (copy, nonatomic) NSArray *avoidWords;
@property (copy, nonatomic) NSArray *avoidPhrases;
@property (copy, nonatomic) NSArray *suggestedWords;
@property (nonatomic) BOOL caseSensitive;
@property (copy, nonatomic) NSString *note;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)issuesForWord:(id)a0 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 previousWord:(id)a2 previousWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 inText:(id)a4 ignoreRuleUntilIndex:(long long *)a5;

@end
