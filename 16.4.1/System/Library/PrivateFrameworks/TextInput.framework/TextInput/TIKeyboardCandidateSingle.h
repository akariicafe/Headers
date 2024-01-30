@class NSString;

@interface TIKeyboardCandidateSingle : TIKeyboardCandidate

@property (copy, nonatomic) NSString *candidate;
@property (copy, nonatomic) NSString *input;
@property (copy, nonatomic) NSString *rawInput;
@property (nonatomic) long long cursorMovement;
@property (copy, nonatomic) NSString *applicationKey;
@property (copy, nonatomic) NSString *applicationBundleId;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic, getter=isExtensionCandidate) BOOL extensionCandidate;
@property (copy, nonatomic) NSString *lexiconLocale;

+ (BOOL)supportsSecureCoding;
+ (int)type;
+ (id)candidateWithCandidate:(id)a0 forInput:(id)a1;
+ (id)candidateWithUnchangedInput:(id)a0;
+ (id)secureCandidateForInput:(id)a0 slotID:(unsigned int)a1;
+ (id)candidateWithCandidate:(id)a0 forInput:(id)a1 cursorMovement:(long long)a2;
+ (id)candidateWithCandidate:(id)a0 forInput:(id)a1 customInfoType:(unsigned long long)a2;
+ (id)candidateWithCandidate:(id)a0 forInput:(id)a1 extensionCandidate:(BOOL)a2;
+ (id)secureCandidateForInput:(id)a0 slotID:(unsigned int)a1 customInfoType:(unsigned long long)a2;
+ (id)secureCandidateForInput:(id)a0 slotID:(unsigned int)a1 customInfoType:(unsigned long long)a2 applicationKey:(id)a3 applicationBundleId:(id)a4 altDSID:(id)a5;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)candidateByReplacingWithCandidate:(id)a0;
- (id)candidateByReplacingWithCandidate:(id)a0 input:(id)a1;
- (BOOL)isAutocorrectionIgnoringCaseAndDiacriticsAndSupplementalItemPrefix;
- (BOOL)isAutocorrectionIgnoringCaseAndSupplementalItemPrefix;
- (BOOL)isHideMyEmailType;
- (id)candidateByReplacingWithCandidate:(id)a0 input:(id)a1 rawInput:(id)a2;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)initWithCandidate:(id)a0;
- (id)initWithCandidate:(id)a0 forInput:(id)a1;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 rawInput:(id)a2;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 rawInput:(id)a2 extensionCandidate:(BOOL)a3;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (id)initWithResponseCandidate:(id)a0;
- (id)initWithUnchangedInput:(id)a0;

@end
