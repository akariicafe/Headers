@class NSDateComponents;

@interface _UICalendarView : UICalendarView

@property (readonly, nonatomic) NSDateComponents *visibleMonth;

- (void)setVisibleMonth:(id)a0 animated:(BOOL)a1;

@end
