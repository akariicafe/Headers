@class NSMutableDictionary;

@interface HDMCSymptomHistoryBuilder : NSObject {
    NSMutableDictionary *_mostRecentDayBySymptom;
}

@property (nonatomic) unsigned long long recentSymptoms;

- (void).cxx_destruct;
- (id)initWithCurrentDayIndex:(long long)a0;
- (void)addSymptoms:(unsigned long long)a0 forDayIndex:(long long)a1;

@end
