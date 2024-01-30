@class TIAutocorrectionList;

@interface TICandidatesOfferedEvent : TIUserAction

@property (readonly, nonatomic) TIAutocorrectionList *candidates;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCandidates:(id)a0 keyboardState:(id)a1;

@end
