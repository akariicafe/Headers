@class TIKeyboardCandidate;

@interface TITypologyRecordTextAccepted : TITypologyRecord

@property (retain, nonatomic) TIKeyboardCandidate *candidate;

+ (BOOL)supportsSecureCoding;

- (id)textSummary;
- (void).cxx_destruct;
- (id)shortDescription;
- (void)applyToStatistic:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)changedText;
- (void)encodeWithCoder:(id)a0;

@end
