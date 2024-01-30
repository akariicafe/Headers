@class NSString;

@interface TIMecabraFacemarkCandidate : TIMecabraCandidate

@property (copy, nonatomic) NSString *category;

+ (BOOL)supportsSecureCoding;
+ (id)candidateWithCandidate:(id)a0 category:(id)a1 input:(id)a2 mecabraCandidatePointerValue:(id)a3;
+ (int)type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (BOOL)isFacemarkCandidate;
- (id)initWithCoder:(id)a0;
- (id)initWithCandidate:(id)a0 category:(id)a1 input:(id)a2 mecabraCandidatePointerValue:(id)a3;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
