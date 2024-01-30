@class WBSPasswordWordListCollection, WBSPasswordPatternMatcher;

@interface WBSPasswordEvaluator : NSObject {
    WBSPasswordWordListCollection *_passwordWordListCollection;
    WBSPasswordWordListCollection *_passcodeWordListCollection;
    WBSPasswordPatternMatcher *_patternMatcher;
}

+ (BOOL)passwordLooksLikeDigitOnlyPasscode:(id)a0;
+ (id)standardPasswordEvaluator;

- (void).cxx_destruct;
- (id)evaluatePassword:(id)a0;
- (id)_initWithPasswordWordListCollection:(id)a0 passcodeWordListCollection:(id)a1;

@end
