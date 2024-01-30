@class NSMutableDictionary;

@interface APOdmlDESRecordManager : APOdmlSingleton

@property (retain, nonatomic) NSMutableDictionary *desRecords;

+ (id)sharedInstance;

- (void)updateRerankedAdList:(id)a0 forRequestID:(id)a1;
- (void)addAdListToDES:(id)a0 forRequestID:(id)a1 organics:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)updateAdData:(id)a0 event:(long long)a1 forRequestID:(id)a2;
- (id)recordForRequestID:(id)a0;

@end
