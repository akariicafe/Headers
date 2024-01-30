@class NSMutableDictionary;

@interface APOdmlDESRecordManager : APOdmlSingleton

@property (retain, nonatomic) NSMutableDictionary *desRecords;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)addAdListToDES:(id)a0 forRequestID:(id)a1 listType:(long long)a2;
- (void)updateAdData:(id)a0 forRequestID:(id)a1;
- (id)recordForRequestID:(id)a0;

@end
