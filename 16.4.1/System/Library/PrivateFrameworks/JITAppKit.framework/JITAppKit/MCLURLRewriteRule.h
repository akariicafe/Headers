@class NSRegularExpression, NSString, NSSet;

@interface MCLURLRewriteRule : MCLURLRequestRewriteRule {
    NSRegularExpression *_replacePattern;
    NSString *_replaceTemplate;
    NSSet *_ignoreHosts;
}

+ (id)urlRewriteRuleFromHost:(id)a0 toHost:(id)a1 ignoreHosts:(id)a2;

- (void).cxx_destruct;
- (id)initWithMatchPattern:(id)a0 replacePattern:(id)a1 replaceTemplate:(id)a2 ignoreHosts:(id)a3;
- (void)rewriteURLRequest:(id)a0;

@end
