@interface PPEventNameRecordLoadingDelegate : PPRecordLoadingDelegate

@property (copy, nonatomic) id /* block */ eventNameRecordsSetup;
@property (copy, nonatomic) id /* block */ eventNameRecordsHandler;
@property (copy, nonatomic) id /* block */ eventNameRecordsCompletion;
@property (copy, nonatomic) id /* block */ recentEventNameRecordsSetup;
@property (copy, nonatomic) id /* block */ recentEventNameRecordsHandler;
@property (copy, nonatomic) id /* block */ recentEventNameRecordsCompletion;
@property (copy, nonatomic) id /* block */ resetEventNameRecordData;

- (unsigned char)recordLoadingSetup;
- (unsigned char)recordLoadingHandler:(id)a0;
- (id)description;
- (unsigned char)recentRecordLoadingSetup;
- (void)resetRecordData;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)recordLoadingCompletion;
- (unsigned char)recentRecordLoadingHandler:(id)a0;
- (void)recentRecordLoadingCompletion;

@end
