@class TIAutocorrectionList;

@interface TICandidatesOfferedEvent : TIUserAction

@property (readonly, nonatomic) TIAutocorrectionList *candidates;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCandidates:(id)a0 keyboardState:(id)a1;

@end
