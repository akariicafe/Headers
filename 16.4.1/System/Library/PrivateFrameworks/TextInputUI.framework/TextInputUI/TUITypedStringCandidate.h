@class NSString;

@interface TUITypedStringCandidate : TIKeyboardCandidateSingle

@property (retain, nonatomic) NSString *displayLabel;

+ (id)typedStringCandidateWithLocale:(id)a0 typedString:(id)a1 rawTypedString:(id)a2;

- (id)label;
- (void).cxx_destruct;

@end
