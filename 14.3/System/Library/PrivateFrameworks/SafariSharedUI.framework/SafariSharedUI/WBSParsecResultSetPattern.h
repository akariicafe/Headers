@class NSRegularExpression;

@interface WBSParsecResultSetPattern : NSObject {
    NSRegularExpression *_regularExpression;
}

+ (id)_regularExpressionPatternForToken:(id)a0;
+ (id)_nextTokenInResultSetPattern:(id)a0;
+ (id)_regularExpressionPatternForResultSetPatternSuffix:(id)a0;
+ (id)_regularExpressionPatternFromResultSetPattern:(id)a0;
+ (id)patternWithString:(id)a0;

- (void).cxx_destruct;
- (BOOL)isMatchedByString:(id)a0;
- (id)_initWithRegularExpression:(id)a0;

@end
