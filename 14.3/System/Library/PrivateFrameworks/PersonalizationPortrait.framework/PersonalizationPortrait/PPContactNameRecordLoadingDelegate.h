@interface PPContactNameRecordLoadingDelegate : PPRecordLoadingDelegate

@property (copy, nonatomic) id /* block */ contactNameRecordsSetup;
@property (copy, nonatomic) id /* block */ contactNameRecordsHandler;
@property (copy, nonatomic) id /* block */ contactNameRecordsCompletion;
@property (copy, nonatomic) id /* block */ recentContactNameRecordsSetup;
@property (copy, nonatomic) id /* block */ recentContactNameRecordsHandler;
@property (copy, nonatomic) id /* block */ recentContactNameRecordsCompletion;
@property (copy, nonatomic) id /* block */ resetContactNameRecordData;

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
