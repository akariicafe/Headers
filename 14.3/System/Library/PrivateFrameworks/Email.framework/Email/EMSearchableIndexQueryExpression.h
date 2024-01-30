@class NSString;

@interface EMSearchableIndexQueryExpression : NSObject <NSCopying>

@property (copy, nonatomic) NSString *queryString;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)expressionWithQueryString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithQueryString:(id)a0;

@end
