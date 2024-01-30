@class NSDate;

@interface HDSPDismissGoodMorningIDSMessage : HDSPEventRecordMessage

@property (readonly, nonatomic) NSDate *goodMorningDismissed;

- (id)dateDescription;
- (id)initWithGoodMorningDismissedDate:(id)a0 timeout:(double)a1;

@end
