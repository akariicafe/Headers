@interface PPEventNameRecordLoadingDelegate : PPRecordLoadingDelegate

@property (copy, nonatomic) id /* block */ eventNameRecordsSetup;
@property (copy, nonatomic) id /* block */ eventNameRecordsHandler;
@property (copy, nonatomic) id /* block */ eventNameRecordsCompletion;
@property (copy, nonatomic) id /* block */ recentEventNameRecordsSetup;
@property (copy, nonatomic) id /* block */ recentEventNameRecordsHandler;
@property (copy, nonatomic) id /* block */ recentEventNameRecordsCompletion;
@property (copy, nonatomic) id /* block */ resetEventNameRecordData;

- (unsigned char)recordLoadingSetup;
- (id)initWithName:(id)a0;
- (unsigned char)recentRecordLoadingSetup;
- (void)recentRecordLoadingCompletion;
- (void)resetRecordData;
- (id)description;
- (void)recordLoadingCompletion;
- (void).cxx_destruct;
- (unsigned char)recentRecordLoadingHandler:(id)a0;
- (unsigned char)recordLoadingHandler:(id)a0;

@end
