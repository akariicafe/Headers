@class EKDayView, EKEvent, NSString, NSArray, UIView, NSDate, UIViewController;
@protocol EKEditItemViewControllerDelegate;

@interface EKDayPreviewController : UIViewController <EKDayViewDataSource, EKEditItemViewControllerProtocol> {
    BOOL _firstshow;
    BOOL _userHasTappedToExpand;
    BOOL _isAnimating;
    NSArray *_cachedTimedEvents;
    UIView *_roundedView;
    EKDayView *_dayView;
    NSDate *_date;
    NSDate *_originalEventStartDate;
    NSDate *_originalEventEndDate;
    BOOL _hasOverriddenEventDates;
    NSDate *_overriddenEventStartDate;
    NSDate *_overriddenEventEndDate;
    BOOL _hasOverriddenStatus;
    BOOL _requireScrollPositionCorrection;
}

@property (nonatomic) unsigned long long style;
@property (weak, nonatomic) UIViewController *hostingViewController;
@property (nonatomic) BOOL hidesAllDayEvents;
@property (nonatomic) BOOL respectsSelectedCalendarsFilter;
@property (nonatomic) long long overriddenParticipantStatus;
@property (retain, nonatomic) EKEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) BOOL useCustomBackButton;

- (id)_anchorEvent;
- (void)reload;
- (void)viewDidLoad;
- (BOOL)_shouldShowAllVisibleEvents;
- (void)viewWillAppear:(BOOL)a0;
- (double)_dayViewHeight;
- (void)_setupAutoLayout;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (id)dayView:(id)a0 eventsForStartDate:(id)a1 endDate:(id)a2;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)_dateForFirstHourMarker;
- (id)_eventsForStartDate:(id)a0 endDate:(id)a1;
- (id)_hourMaskForEvents:(id)a0;
- (void)loadView;
- (void)_setupDayView;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_eventOccursOnThisDay:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_displayedHoursRange;
- (void)renderPressHighlight:(BOOL)a0;
- (void)reloadWithNewDate:(id)a0 overriddenEventStartDate:(id)a1 overriddenEventEndDate:(id)a2;
- (void)_scrollDayViewToCorrectOffsetAnimated:(BOOL)a0;
- (id)_selectedCalendars;
- (void)_setNewVisibleHourLabels;
- (id)initWithDate:(id)a0 event:(id)a1 overriddenEventStartDate:(id)a2 overriddenEventEndDate:(id)a3;
- (void)toggleExpandedState;

@end
