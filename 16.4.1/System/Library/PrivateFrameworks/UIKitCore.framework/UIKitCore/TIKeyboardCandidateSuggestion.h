@class UITextSuggestion;

@interface TIKeyboardCandidateSuggestion : TIKeyboardCandidate {
    unsigned long long _customInfoType;
}

@property (readonly, nonatomic) UITextSuggestion *textSuggestion;

+ (id)candidateWithSuggestion:(id)a0;
+ (id)candidateWithSuggestion:(id)a0 customInfoType:(unsigned long long)a1;

- (id)candidate;
- (unsigned long long)customInfoType;
- (id)input;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)label;
- (void).cxx_destruct;
- (id)initWithSuggestion:(id)a0 customInfoType:(unsigned long long)a1;

@end
