@class NSMutableArray;

@interface CUTCheckpointTrace : CUTCheckpointRange

@property (retain, nonatomic) NSMutableArray *mutableCheckpoints;

- (void)freeze;
- (id)description;
- (void).cxx_destruct;
- (id)_identifierWithExtraIdentifier:(id)a0;
- (void)_appendReportToMutableString:(id)a0 indentation:(long long)a1 paddedNameLength:(long long)a2;
- (id)appendCheckpoint:(id)a0;
- (id)checkpoints;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 name:(id)a2 uniqueIdentifier:(id)a3;
- (id)instantCheckpointWithName:(id)a0;
- (id)instantCheckpointWithName:(id)a0 extraIdentifier:(id)a1;
- (id)rangeCheckpointWithName:(id)a0;
- (id)rangeCheckpointWithName:(id)a0 extraIdentifier:(id)a1;
- (void)setAssertsUseAfterFreeze:(BOOL)a0;

@end
