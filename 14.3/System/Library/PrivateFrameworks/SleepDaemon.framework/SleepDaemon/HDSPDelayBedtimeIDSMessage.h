@class NSDate;

@interface HDSPDelayBedtimeIDSMessage : HDSPEventRecordMessage

@property (readonly, nonatomic) NSDate *bedtimeDelayedUntil;

- (id)dateDescription;
- (id)initWithBedtimeDelayedUntilDate:(id)a0 timeout:(double)a1;

@end
