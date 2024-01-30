@class WBSPasswordWordListCollection, WBSPasswordPatternMatcher;

@interface WBSPasswordEvaluator : NSObject {
    WBSPasswordWordListCollection *_passwordWordListCollection;
    WBSPasswordWordListCollection *_passcodeWordListCollection;
    WBSPasswordPatternMatcher *_patternMatcher;
}

+ (id)standardPasswordEvaluator;
+ (BOOL)passwordLooksLikeDigitOnlyPasscode:(id)a0;

- (void).cxx_destruct;
- (id)evaluatePassword:(id)a0;
- (id)_initWithPasswordWordListCollection:(id)a0 passcodeWordListCollection:(id)a1;

@end
