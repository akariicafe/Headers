@class NSString, CSSuggestion;

@interface EMSearchableIndexQueryExpression : NSObject <NSCopying, EFPubliclyDescribable>

@property (copy, nonatomic) NSString *queryString;
@property (copy, nonatomic) NSString *searchString;
@property (readonly, copy, nonatomic) CSSuggestion *updatedSuggestion;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)expressionWithQueryString:(id)a0;
+ (id)expressionWithQueryString:(id)a0 searchString:(id)a1 updatedSuggestion:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithQueryString:(id)a0 searchString:(id)a1 updatedSuggestion:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
