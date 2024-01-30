@interface HDTMockCMNatalimeter : CMNatalimeter

@property (copy, nonatomic) id /* block */ handleQueryDataSinceRecord;
@property (copy, nonatomic) id /* block */ handleStartNatalimetryUpdates;
@property (copy, nonatomic) id /* block */ handleStopNatalimeteryUpdates;

- (void).cxx_destruct;
- (void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)a0 withHandler:(id /* block */)a1;
- (void)startAbsoluteNatalimetryDataUpdatesWithHandler:(id /* block */)a0;
- (void)stopAbsoluteNatalimetryDataUpdates;

@end
