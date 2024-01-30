@class NSString;

@interface TIPinyinDisambiguationCandidate : TIKeyboardCandidateSingle {
    NSString *_label;
}

@property (nonatomic, getter=isGeneratedByChoosePinyin) BOOL generatedByChoosePinyin;

+ (BOOL)supportsSecureCoding;
+ (id)candidateWithPinyinSyllable:(id)a0;
+ (int)type;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)label;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPinyinSyllable:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)setLabel:(id)a0;

@end
