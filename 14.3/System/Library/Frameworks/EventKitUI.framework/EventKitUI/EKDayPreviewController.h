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

- (void)reload;
- (id)_selectedCalendars;
- (BOOL)_shouldShowAllVisibleEvents;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_setupDayView;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_setNewVisibleHourLabels;
- (void)toggleExpandedState;
- (void)loadView;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_displayedHoursRange;
- (BOOL)_eventOccursOnThisDay:(id)a0;
- (void)_scrollDayViewToCorrectOffsetAnimated:(BOOL)a0;
- (double)_dayViewHeight;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)dayView:(id)a0 eventsForStartDate:(id)a1 endDate:(id)a2;
- (void)reloadWithNewDate:(id)a0 overriddenEventStartDate:(id)a1 overriddenEventEndDate:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (id)_hourMaskForEvents:(id)a0;
- (id)_anchorEvent;
- (id)_dateForFirstHourMarker;
- (id)_eventsForStartDate:(id)a0 endDate:(id)a1;
- (void)renderPressHighlight:(BOOL)a0;
- (id)initWithDate:(id)a0 event:(id)a1 overriddenEventStartDate:(id)a2 overriddenEventEndDate:(id)a3;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setupAutoLayout;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
