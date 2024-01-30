@class UITextReplacement;

@interface UITextReplacementCandidate : TIKeyboardCandidateSingle

@property (readonly, nonatomic) UITextReplacement *replacement;

+ (id)textReplacementCandidateForTextReplacement:(id)a0;

- (void).cxx_destruct;
- (id)_initWithTextReplacement:(id)a0;
- (id)label;

@end
