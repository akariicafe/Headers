@class VCSDate;

@interface VCSEvent : VCSEntity

@property (retain, nonatomic) VCSDate *startDate;
@property (retain, nonatomic) VCSDate *endDate;
@property (nonatomic) BOOL fullDayEvent;

- (unsigned long long)entityType;
- (void)ensureDurationAlarms;
- (BOOL)isValidStatus:(unsigned long long)a0;

@end
