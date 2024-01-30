@interface PPEventNameRecordLoadingDelegate : PPRecordLoadingDelegate

@property (copy, nonatomic) id /* block */ eventNameRecordsSetup;
@property (copy, nonatomic) id /* block */ eventNameRecordsHandler;
@property (copy, nonatomic) id /* block */ eventNameRecordsCompletion;
@property (copy, nonatomic) id /* block */ recentEventNameRecordsSetup;
@property (copy, nonatomic) id /* block */ recentEventNameRecordsHandler;
@property (copy, nonatomic) id /* block */ recentEventNameRecordsCompletion;
@property (copy, nonatomic) id /* block */ resetEventNameRecordData;

- (void).cxx_destruct;
- (unsigned char)recordLoadingSetup;
- (id)description;
- (void)recordLoadingCompletion;
- (unsigned char)recentRecordLoadingSetup;
- (unsigned char)recordLoadingHandler:(id)a0;
- (void)resetRecordData;
- (unsigned char)recentRecordLoadingHandler:(id)a0;
- (id)initWithName:(id)a0;
- (void)recentRecordLoadingCompletion;

@end
