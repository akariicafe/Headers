@class EKEvent, NSString, ADEventEditViewController;

@interface ADCalendarEventActionViewController : ADActionViewController <EKEventEditViewDelegate>

@property (retain, nonatomic) EKEvent *calendarEvent;
@property (retain, nonatomic) ADEventEditViewController *eventKitEditViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)eventEditViewController:(id)a0 didCompleteWithAction:(long long)a1;
- (void)dismiss;
- (void)clientApplicationDidEnterBackground;
- (void)didSetAdSpace;

@end
