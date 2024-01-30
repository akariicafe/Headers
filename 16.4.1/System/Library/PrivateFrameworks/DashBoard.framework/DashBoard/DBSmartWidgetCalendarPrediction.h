@class NSArray, NSDate;

@interface DBSmartWidgetCalendarPrediction : DBSmartWidgetPrediction

@property (class, retain, nonatomic) NSDate *now;
@property (class, readonly, nonatomic) NSDate *earliestStartDate;
@property (class, readonly, nonatomic) NSDate *latestStartDate;

@property (nonatomic, getter=isSoonestEvent) BOOL soonestEvent;
@property (readonly, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BOOL allDay;
@property (readonly, nonatomic) BOOL variousEndDates;

+ (double)minValue;
+ (double)maxValue;
+ (long long)baseScore;
+ (double)initialValidInterval;
+ (SEL)isEqualClassSelector;

- (void)addEvent:(id)a0;
- (id)subtitle;
- (id)initWithEvent:(id)a0;
- (double)value;
- (id)image;
- (id)title;
- (void).cxx_destruct;
- (id /* block */)actionBlock;
- (id)predictedObject;
- (BOOL)showImageBorder;
- (id)_uuidFromString:(id)a0;
- (id)defaultValidRanges;
- (double)initialValidInterval;
- (BOOL)isEqualToCalendarPrediction:(id)a0;
- (id)predictedObjectDescription;
- (long long)tieBreakScore;
- (void)updateRangeIfNeeded:(id)a0;
- (BOOL)updateWithPrediction:(id)a0;

@end
