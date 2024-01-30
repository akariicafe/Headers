@protocol CalendarPublishingActivityDelegate;

@interface CalendarPublishingActivityViewController : UIActivityViewController

@property (weak) id<CalendarPublishingActivityDelegate> activityDelegate;

- (void)_prepareActivity:(id)a0;
- (BOOL)_shouldShowSystemActivityType:(id)a0;
- (void).cxx_destruct;

@end
