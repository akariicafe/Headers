@class TIKeyboardCandidate;

@interface TITypologyRecordTextAccepted : TITypologyRecord

@property (retain, nonatomic) TIKeyboardCandidate *candidate;

+ (BOOL)supportsSecureCoding;

- (id)shortDescription;
- (id)textSummary;
- (void)encodeWithCoder:(id)a0;
- (void)applyToStatistic:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)changedText;

@end
