@class NSString, NSArray, WBSPasswordPatternMatch;

@interface WBSPasswordEvaluation : NSObject

@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, copy, nonatomic) NSArray *patternMatches;
@property (readonly, nonatomic) long long evaluationType;
@property (readonly, nonatomic) double guessesRequired;
@property (readonly, nonatomic) unsigned long long strength;
@property (readonly, nonatomic) BOOL userShouldBeShownPassiveWarning;
@property (readonly, nonatomic) BOOL userShouldBeShownActiveWarning;
@property (readonly, nonatomic) WBSPasswordPatternMatch *bestPatternMatchForUserFeedback;
@property (readonly, nonatomic) NSString *userFeedbackString;

- (void).cxx_destruct;
- (unsigned long long)_userFeedbackLengthScoreForPatternMatch:(id)a0;
- (BOOL)_shouldShowUserFeedbackStringsForWordListPatternMatch:(id)a0;
- (id)_passwordFeedbackString;
- (id)_bestPatternMatchOfType:(unsigned long long)a0;
- (id)compactDescriptionWithPasswordColumnWidth:(unsigned long long)a0 includePatternMatches:(BOOL)a1;
- (id)initWithEvaluationType:(long long)a0 password:(id)a1 patternMatches:(id)a2 guessesRequired:(double)a3;

@end
