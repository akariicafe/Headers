@interface PPNamedEntityRecordLoadingDelegate : PPRecordLoadingDelegate

@property (copy, nonatomic) id /* block */ namedEntityRecordsSetup;
@property (copy, nonatomic) id /* block */ namedEntityRecordsHandler;
@property (copy, nonatomic) id /* block */ namedEntityRecordsCompletion;
@property (copy, nonatomic) id /* block */ recentNamedEntityRecordsSetup;
@property (copy, nonatomic) id /* block */ recentNamedEntityRecordsHandler;
@property (copy, nonatomic) id /* block */ recentNamedEntityRecordsCompletion;
@property (copy, nonatomic) id /* block */ resetNamedEntityRecordData;

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
