@interface PPContactNameRecordLoadingDelegate : PPRecordLoadingDelegate

@property (copy, nonatomic) id /* block */ contactNameRecordsSetup;
@property (copy, nonatomic) id /* block */ contactNameRecordsHandler;
@property (copy, nonatomic) id /* block */ contactNameRecordsCompletion;
@property (copy, nonatomic) id /* block */ recentContactNameRecordsSetup;
@property (copy, nonatomic) id /* block */ recentContactNameRecordsHandler;
@property (copy, nonatomic) id /* block */ recentContactNameRecordsCompletion;
@property (copy, nonatomic) id /* block */ resetContactNameRecordData;

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
