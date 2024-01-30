@class NSMutableString, NSMutableArray;

@interface TITypologyStatisticBasicCounts : TITypologyStatisticCurrentAutocorrections

@property (readonly, nonatomic) NSMutableString *recentText;
@property (readonly, nonatomic) NSMutableArray *recentAutocorrectionLocations;
@property (readonly, nonatomic) NSMutableString *recentTextBeforeBackspace;
@property (readonly, nonatomic) NSMutableString *recentTextAfterBackspace;
@property (nonatomic) BOOL backspacedIntoAutocorrection;
@property (readonly, nonatomic) long long touchCount;
@property (readonly, nonatomic) long long characterCount;
@property (readonly, nonatomic) long long predictedCharacterCount;
@property (readonly, nonatomic) long long backspaceCount;
@property (readonly, nonatomic) long long autocorrectionCount;
@property (readonly, nonatomic) long long rejectedCandidateCount;
@property (readonly, nonatomic) long long backspaceIntoAutocorrectionCount;
@property (readonly, nonatomic) long long predictiveSelectionCount;
@property (readonly, nonatomic) long long falseBackspaceCount;
@property (readonly, nonatomic) long long falseBackspaceIntoAutocorrectionCount;

- (void)visitRecordHitTest:(id)a0;
- (void)handleTouch:(id)a0;
- (void)visitRecordCandidateRejected:(id)a0;
- (void)updateTextWithAcceptedCandidate:(id)a0;
- (void)visitRecordKeyboardInput:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)aggregateReport;
- (id)structuredReport;
- (void)visitRecordSync:(id)a0;
- (void)visitRecordTextAccepted:(id)a0;
- (void)visitRecordSkipHitTest:(id)a0;

@end
