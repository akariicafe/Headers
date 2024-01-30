@class EKCalendarItem;

@interface WFCalendarItemContentItemChangeTransaction : WFContentItemChangeTransaction

@property (readonly, nonatomic) EKCalendarItem *mutableEvent;

- (void).cxx_destruct;
- (id)initWithOriginalContentItem:(id)a0 mutableEvent:(id)a1;

@end
