@class NSString;

@interface TILiveConversionCandidate : TIMecabraCandidate {
    NSString *_candidate;
}

@property (nonatomic, getter=isInlineCandidate) BOOL inlineCandidate;
@property (nonatomic, getter=isPartialCandidate) BOOL partialCandidate;

+ (BOOL)supportsSecureCoding;
+ (int)type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)initWithSurface:(id)a0 input:(id)a1 candidate:(id)a2 mecabraCandidatePointerValue:(id)a3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)label;
- (id)candidate;
- (void)encodeWithCoder:(id)a0;

@end
