@class DAESubscribedCalendarSummary, NSString, EKSubscribedCalendarDescriptionHeader, NSURL, CUIKSubscribedCalendarManager, EKCalendarColorEditItem, EKCalendarCancelValidationEditItem, EKCalendarValidateEditItem, EKSource, EKCalendarSubscriptionSpamCheckEditItem, EKCalendarSubscriptionURLEditItem;

@interface EKSubscribedCalendarEditor : EKAbstractCalendarEditor <DAESubscribedCalendarDownloadDelegate, EKCalendarSubscriptionURLEditItemDelegate, EKCalendarSubscriptionSpamCheckEditItemDelegate> {
    EKSource *_limitedToSource;
    EKSubscribedCalendarDescriptionHeader *_tableViewHeader;
    NSString *_username;
    NSString *_password;
    BOOL _insecureConnectionOffered;
    BOOL _insecureConnectionApproved;
    BOOL _holidayCalendarMode;
    NSString *_preloadTitle;
    EKCalendarColorEditItem *_colorEditItem;
    EKCalendarSubscriptionURLEditItem *_urlItem;
    EKCalendarValidateEditItem *_validateItem;
    EKCalendarCancelValidationEditItem *_cancelValidationItem;
    EKCalendarSubscriptionSpamCheckEditItem *_spamCheckItem;
    id _previewDownloadToken;
    DAESubscribedCalendarSummary *_previewSummary;
    CUIKSubscribedCalendarManager *_subCalManager;
    BOOL _allowTableHeaderLayouts;
}

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSURL *prefillURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createNewCalendarForEntityType:(unsigned long long)a0 inEventStore:(id)a1;

- (id)rightButton;
- (void)cancel:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)_validateURL:(id)a0;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (BOOL)_shouldShowDeleteButton;
- (void)_cancelInFlightPreviewDataFetch;
- (void)URLEditItemDidChangeURLString:(id)a0;
- (void)_allowButtonTapped;
- (void)_denyButtonTapped;
- (id)_editItemsForState:(unsigned long long)a0;
- (void)_kickoffPreviewDataFetch:(id)a0;
- (BOOL)_needToShowPrivacyNotice;
- (void)_promptToContinueUsingInsecureConnection;
- (void)_setTableHeaderViewForState;
- (void)_showPrivacyNotice;
- (void)_startSpamCheckingURLString:(id)a0;
- (void)_unsubscribeFromCalendar;
- (void)_unsubscribeFromCalendarAndReportJunk;
- (void)_unsubscribeTapped:(id)a0;
- (void)_updateCancelButtonVisibilityForSpamStatus:(BOOL)a0;
- (void)_updateTableHeaderLayout;
- (void)_validateURL;
- (void)_validateUserEnteredURL;
- (struct CGSize { double x0; double x1; })calculatePreferredContentSize;
- (void)calendarItemStartedEditing:(id)a0;
- (void)calendarSubscriptionSpamCheckEditItem:(id)a0 didDetermineThatURL:(id)a1 isSpam:(BOOL)a2;
- (void)didSaveCalendar:(id)a0;
- (id)initWithCalendar:(id)a0 eventStore:(id)a1 entityType:(unsigned long long)a2 limitedToSource:(id)a3;
- (id)loadEditItems;
- (void)setHolidayCalendarModeWithTitle:(id)a0;
- (void)subscribedCalendarDidFinishLoading:(id)a0;
- (void)subscribedCalendarFailedWithError:(id)a0;
- (void)subscribedCalendarProgressedTo:(long long)a0 totalBytes:(long long)a1;
- (void)subscribedCalendarRequiresPassword:(id)a0 withContinuation:(id /* block */)a1;
- (void)willSaveCalendar:(id)a0;

@end
