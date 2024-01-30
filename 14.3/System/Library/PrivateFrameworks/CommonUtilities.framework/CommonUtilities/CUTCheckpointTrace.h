@class NSMutableArray;

@interface CUTCheckpointTrace : CUTCheckpointRange

@property (retain, nonatomic) NSMutableArray *mutableCheckpoints;

- (void).cxx_destruct;
- (void)_appendReportToMutableString:(id)a0 indentation:(long long)a1 paddedNameLength:(long long)a2;
- (void)setAssertsUseAfterFreeze:(BOOL)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 name:(id)a2 uniqueIdentifier:(id)a3;
- (id)checkpoints;
- (id)instantCheckpointWithName:(id)a0 extraIdentifier:(id)a1;
- (id)appendCheckpoint:(id)a0;
- (id)_identifierWithExtraIdentifier:(id)a0;
- (id)rangeCheckpointWithName:(id)a0 extraIdentifier:(id)a1;
- (id)instantCheckpointWithName:(id)a0;
- (id)rangeCheckpointWithName:(id)a0;
- (void)freeze;
- (id)description;

@end
