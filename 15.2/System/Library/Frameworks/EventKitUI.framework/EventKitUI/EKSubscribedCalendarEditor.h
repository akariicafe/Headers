@class NSString, EKSubscribedCalendarDescriptionHeader, NSURL, CUIKSubscribedCalendarManager, EKCalendarColorEditItem, EKCalendarValidateEditItem, EKSource, DAESubscribedCalendarSummary, EKCalendarSubscriptionURLEditItem;

@interface EKSubscribedCalendarEditor : EKAbstractCalendarEditor <DAESubscribedCalendarDownloadDelegate> {
    EKSource *_limitedToSource;
    EKSubscribedCalendarDescriptionHeader *_tableViewHeader;
    NSString *_username;
    NSString *_password;
    BOOL _insecureConnectionOffered;
    BOOL _insecureConnectionApproved;
    EKCalendarColorEditItem *_colorEditItem;
    EKCalendarSubscriptionURLEditItem *_urlItem;
    EKCalendarValidateEditItem *_validateItem;
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

- (void)cancel:(id)a0;
- (id)rightButton;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_validateURL:(id)a0;
- (void)willSaveCalendar:(id)a0;
- (void)didSaveCalendar:(id)a0;
- (id)loadEditItems;
- (void)calendarItemStartedEditing:(id)a0;
- (id)initWithCalendar:(id)a0 eventStore:(id)a1 entityType:(unsigned long long)a2 limitedToSource:(id)a3;
- (BOOL)_shouldShowDeleteButton;
- (void)_setTableHeaderViewForState;
- (id)_editItemsForState:(unsigned long long)a0;
- (void)_unsubscribeTapped:(id)a0;
- (void)_cancelInFlightPreviewDataFetch;
- (void)_unsubscribeFromCalendar;
- (void)_unsubscribeFromCalendarAndReportJunk;
- (void)_validateURL;
- (void)_kickoffPreviewDataFetch:(id)a0;
- (void)_promptToContinueUsingInsecureConnection;
- (void)subscribedCalendarDidFinishLoading:(id)a0;
- (void)subscribedCalendarFailedWithError:(id)a0;
- (void)subscribedCalendarProgressedTo:(long long)a0 totalBytes:(long long)a1;
- (void)subscribedCalendarRequiresPassword:(id)a0 withContinuation:(id /* block */)a1;

@end
