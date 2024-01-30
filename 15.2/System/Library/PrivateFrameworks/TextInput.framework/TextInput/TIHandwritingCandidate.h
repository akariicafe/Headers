@interface TIHandwritingCandidate : TIKeyboardCandidateSingle

@property (readonly, nonatomic) unsigned long long uniqueID;
@property (readonly, nonatomic) unsigned long long completionUniqueID;

+ (BOOL)supportsSecureCoding;
+ (int)type;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (BOOL)isCompletionCandidate;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 uniqueID:(unsigned long long)a2 completionUniqueID:(unsigned long long)a3;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isInlineCompletionCandidate;

@end
