@class NSMutableDictionary;

@interface APOdmlDESRecordManager : APOdmlSingleton

@property (retain, nonatomic) NSMutableDictionary *desRecords;

+ (id)sharedInstance;

- (void)addAdListToDES:(id)a0 forRecordID:(id)a1 placementType:(unsigned long long)a2;
- (id)init;
- (void)updateAdData:(id)a0 event:(long long)a1 forRecordID:(id)a2;
- (void).cxx_destruct;
- (id)recordForID:(id)a0 placementType:(unsigned long long)a1;

@end
