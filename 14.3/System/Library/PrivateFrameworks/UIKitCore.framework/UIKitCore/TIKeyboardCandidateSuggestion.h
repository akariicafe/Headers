@class UITextSuggestion;

@interface TIKeyboardCandidateSuggestion : TIKeyboardCandidate {
    unsigned long long _customInfoType;
}

@property (readonly, nonatomic) UITextSuggestion *textSuggestion;

+ (id)candidateWithSuggestion:(id)a0 customInfoType:(unsigned long long)a1;
+ (id)candidateWithSuggestion:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)input;
- (BOOL)isEqual:(id)a0;
- (id)label;
- (id)initWithSuggestion:(id)a0 customInfoType:(unsigned long long)a1;
- (unsigned long long)customInfoType;
- (id)candidate;

@end
