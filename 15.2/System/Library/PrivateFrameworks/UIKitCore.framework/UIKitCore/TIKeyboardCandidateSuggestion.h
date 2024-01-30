@class UITextSuggestion;

@interface TIKeyboardCandidateSuggestion : TIKeyboardCandidate {
    unsigned long long _customInfoType;
}

@property (readonly, nonatomic) UITextSuggestion *textSuggestion;

+ (id)candidateWithSuggestion:(id)a0 customInfoType:(unsigned long long)a1;
+ (id)candidateWithSuggestion:(id)a0;

- (id)input;
- (unsigned long long)customInfoType;
- (id)label;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSuggestion:(id)a0 customInfoType:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)candidate;

@end
