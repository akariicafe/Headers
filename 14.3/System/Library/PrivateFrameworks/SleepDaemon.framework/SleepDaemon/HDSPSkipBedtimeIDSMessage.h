@class NSDate;

@interface HDSPSkipBedtimeIDSMessage : HDSPEventRecordMessage

@property (readonly, nonatomic) NSDate *bedtimeSkippedDate;

- (id)dateDescription;
- (id)initWithBedtimeSkippedDate:(id)a0 timeout:(double)a1;

@end
