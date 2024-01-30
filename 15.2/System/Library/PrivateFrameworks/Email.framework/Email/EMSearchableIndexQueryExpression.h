@class NSString;

@interface EMSearchableIndexQueryExpression : NSObject <NSCopying>

@property (copy, nonatomic) NSString *queryString;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)expressionWithQueryString:(id)a0;

- (id)initWithQueryString:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
