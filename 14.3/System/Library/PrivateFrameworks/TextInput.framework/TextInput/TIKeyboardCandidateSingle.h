@class NSString;

@interface TIKeyboardCandidateSingle : TIKeyboardCandidate

@property (copy, nonatomic) NSString *candidate;
@property (copy, nonatomic) NSString *input;
@property (nonatomic) long long *cursorMovement;
@property (nonatomic, getter=isExtensionCandidate) BOOL extensionCandidate;

+ (BOOL)supportsSecureCoding;
+ (id)candidateWithUnchangedInput:(id)a0;
+ (id)candidateWithCandidate:(id)a0 forInput:(id)a1 extensionCandidate:(BOOL)a2;
+ (id)candidateWithCandidate:(id)a0 forInput:(id)a1 customInfoType:(unsigned long long)a2;
+ (id)secureCandidateForInput:(id)a0 slotID:(unsigned int)a1;
+ (id)candidateWithCandidate:(id)a0 forInput:(id)a1 cursorMovement:(long long)a2;
+ (id)secureCandidateForInput:(id)a0 slotID:(unsigned int)a1 customInfoType:(unsigned long long)a2;
+ (int)type;
+ (id)candidateWithCandidate:(id)a0 forInput:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)candidateByReplacingWithCandidate:(id)a0 input:(id)a1;
- (id)initWithCandidate:(id)a0;
- (id)initWithCandidate:(id)a0 forInput:(id)a1;
- (id)initWithUnchangedInput:(id)a0;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 extensionCandidate:(BOOL)a2;
- (id)initWithResponseCandidate:(id)a0;
- (id)candidateByReplacingWithCandidate:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
