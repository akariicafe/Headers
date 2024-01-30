@class NSArray;

@interface PXTimelineSchedulerOptions : NSObject

@property (nonatomic) double timelineEntryDuration;
@property (nonatomic) double bestContentEntryDuration;
@property (retain, nonatomic) NSArray *bestContentStartTimeHours;

- (id)init;
- (void).cxx_destruct;

@end
