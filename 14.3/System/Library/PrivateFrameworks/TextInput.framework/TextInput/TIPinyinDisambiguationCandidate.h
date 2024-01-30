@class NSString;

@interface TIPinyinDisambiguationCandidate : TIKeyboardCandidateSingle {
    NSString *_label;
}

+ (BOOL)supportsSecureCoding;
+ (id)candidateWithPinyinSyllable:(id)a0;
+ (int)type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (void)setLabel:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithPinyinSyllable:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)label;
- (void)encodeWithCoder:(id)a0;

@end
