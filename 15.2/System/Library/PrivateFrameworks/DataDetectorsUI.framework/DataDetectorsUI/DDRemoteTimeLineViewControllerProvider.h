@class NSArray, EKEvent, EKEventStore, NSString;

@interface DDRemoteTimeLineViewControllerProvider : DDRemoteActionViewControllerProvider <EKDayViewControllerDataSource, EKDayViewControllerDelegate>

@property (retain) NSArray *events;
@property (retain) EKEvent *event;
@property (retain) EKEventStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dayViewController:(id)a0 didSelectEvent:(id)a1 animated:(BOOL)a2;
- (void)dayViewControllerDidFinishPinchingDayView:(id)a0;
- (void)dayViewControllerIsPinchingDayView:(id)a0;
- (void)dayViewController:(id)a0 awaitsRefreshingOccurrence:(id)a1;
- (void)dayViewController:(id)a0 awaitsDeletingOccurrence:(id)a1;
- (id)dayViewController:(id)a0 eventsForStartDate:(id)a1 endDate:(id)a2;
- (void)dayViewControllerDidChangeDisplayedOccurrences:(id)a0;
- (void)dayViewControllerDidReloadData:(id)a0;
- (void)dayViewControllerDidTapEmptySpace:(id)a0;
- (id)dayViewController:(id)a0 createEventAtDate:(id)a1 allDay:(BOOL)a2;
- (BOOL)dayViewControllerShouldAllowLongPress:(id)a0;
- (void)dayViewcontrollerDidBeginMovingEventWithGesture:(id)a0;
- (void)dayViewController:(id)a0 beginEditingOccurrence:(id)a1;
- (BOOL)delegateWantsToHandleDayViewController:(id)a0 gestureCommittingOccurrence:(id)a1;
- (void)dayViewController:(id)a0 handleGestureCommittingOccurrence:(id)a1;
- (void)dayViewController:(id)a0 didChangeDisplayDate:(id)a1;
- (BOOL)dayViewControllerShouldShowDetachDialogOnGestureDraggingEnd:(id)a0;
- (BOOL)dayViewControllerShouldRespondToApplicationDidBecomeActiveStateChange:(id)a0;
- (void)dayViewControllerDidRespondToApplicationDidBecomeActiveStateChange:(id)a0;
- (BOOL)dayviewControllerShouldAllowSwipeToChangeDays:(id)a0;
- (void)updateSelectedOccurrenceView;
- (void)createViewControllerWithCompletionHandler:(id /* block */)a0;
- (void)dayViewController:(id)a0 didSelectEvent:(id)a1;

@end
