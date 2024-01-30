@class NSString, NSRegularExpression;

@interface MCLURLRequestRewriteRule : NSObject {
    id /* block */ _block;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) float priority;
@property (readonly, nonatomic) NSRegularExpression *matchPattern;

+ (id)urlRequestRewriteRuleWithMatchPattern:(id)a0 block:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithMatchExpression:(id)a0 block:(id /* block */)a1;
- (void)rewriteURLRequest:(id)a0;

@end
