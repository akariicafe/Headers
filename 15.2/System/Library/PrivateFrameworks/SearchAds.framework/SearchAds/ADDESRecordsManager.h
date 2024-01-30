@class NSString;

@interface ADDESRecordsManager : NSObject

@property (retain, nonatomic) NSString *searchRequestID;

- (void).cxx_destruct;
- (id)init;
- (void)addRerankedAdRecordsToDES:(id)a0;
- (void)addOriginalAdRecordsToDES:(id)a0 responseTypeString:(id)a1 organics:(id)a2;
- (void)updateDESRecord:(id)a0 forEvent:(long long)a1;
- (id)eventTypeToString:(long long)a0;
- (id)_createRecordForAdData:(id)a0 index:(unsigned long long)a1 responseType:(id)a2;

@end
