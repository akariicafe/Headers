@class NSMutableArray, NSDateFormatter, NSDate;

@interface TimeProvider : BaseDateProvider {
    NSDateFormatter *_dateFormatter;
    NSMutableArray *_sizingFallbackBlocks;
}

@property (retain, nonatomic) NSDate *date;

- (id)_sessionTextForIndex:(long long)a0;
- (id)_timeTextWithDropMinutes:(BOOL)a0 dropDesignator:(BOOL)a1;
- (id)initWithDate:(id)a0;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0 calendar:(id)a1 locale:(id)a2 timeZone:(id)a3;

@end
