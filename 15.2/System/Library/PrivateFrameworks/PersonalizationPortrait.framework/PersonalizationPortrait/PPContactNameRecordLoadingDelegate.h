@interface PPContactNameRecordLoadingDelegate : PPRecordLoadingDelegate

@property (copy, nonatomic) id /* block */ contactNameRecordsSetup;
@property (copy, nonatomic) id /* block */ contactNameRecordsHandler;
@property (copy, nonatomic) id /* block */ contactNameRecordsCompletion;
@property (copy, nonatomic) id /* block */ recentContactNameRecordsSetup;
@property (copy, nonatomic) id /* block */ recentContactNameRecordsHandler;
@property (copy, nonatomic) id /* block */ recentContactNameRecordsCompletion;
@property (copy, nonatomic) id /* block */ resetContactNameRecordData;

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
