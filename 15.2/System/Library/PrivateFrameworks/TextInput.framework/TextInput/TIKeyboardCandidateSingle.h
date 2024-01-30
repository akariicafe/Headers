@class NSString;

@interface TIKeyboardCandidateSingle : TIKeyboardCandidate

@property (copy, nonatomic) NSString *candidate;
@property (copy, nonatomic) NSString *input;
@property (nonatomic) long long cursorMovement;
@property (nonatomic, getter=isExtensionCandidate) BOOL extensionCandidate;

+ (BOOL)supportsSecureCoding;
+ (id)candidateWithCandidate:(id)a0 forInput:(id)a1 extensionCandidate:(BOOL)a2;
+ (id)candidateWithCandidate:(id)a0 forInput:(id)a1 customInfoType:(unsigned long long)a2;
+ (id)secureCandidateForInput:(id)a0 slotID:(unsigned int)a1;
+ (id)candidateWithCandidate:(id)a0 forInput:(id)a1 cursorMovement:(long long)a2;
+ (id)secureCandidateForInput:(id)a0 slotID:(unsigned int)a1 customInfoType:(unsigned long long)a2;
+ (id)candidateWithUnchangedInput:(id)a0;
+ (int)type;
+ (id)candidateWithCandidate:(id)a0 forInput:(id)a1;

- (BOOL)isAutocorrectionIgnoringCaseAndDiacriticsAndSupplementalItemPrefix;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)initWithCandidate:(id)a0 forInput:(id)a1;
- (id)initWithResponseCandidate:(id)a0;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 extensionCandidate:(BOOL)a2;
- (id)initWithUnchangedInput:(id)a0;
- (id)initWithCandidate:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)candidateByReplacingWithCandidate:(id)a0 input:(id)a1;
- (BOOL)isAutocorrectionIgnoringCaseAndSupplementalItemPrefix;
- (id)candidateByReplacingWithCandidate:(id)a0;

@end
