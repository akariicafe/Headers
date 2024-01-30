@class NSDate;

@interface HDSPSkipWindDownIDSMessage : HDSPEventRecordMessage

@property (readonly, nonatomic) NSDate *windDownSkippedDate;

- (id)dateDescription;
- (id)initWithWindDownSkippedDate:(id)a0 timeout:(double)a1;

@end
