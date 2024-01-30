@class NSDate;

@interface HDSPSleepAlarmDismissedIDSMessage : HDSPEventRecordMessage

@property (readonly, nonatomic) NSDate *dismissedDate;

- (unsigned long long)destinations;
- (id)dateDescription;
- (id)initWithDismissedDate:(id)a0;

@end
