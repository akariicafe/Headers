@class UIViewController, NSString, EKEventStore, EKEventViewController, EKEvent, EKICSPreviewModel;
@protocol EKICSPreviewControllerDelegate;

@interface EKICSPreviewController : NSObject <EKEventViewDelegatePrivate> {
    EKICSPreviewModel *_model;
    EKEventStore *_eventStore;
    EKEventViewController *_currentImport;
    UIViewController *_contentViewController;
    BOOL _importing;
    BOOL _hasCustomCancelButton;
    long long _cancelButtonType;
    EKEvent *_eventFromUID;
}

@property (weak, nonatomic) id<EKICSPreviewControllerDelegate> previewDelegate;
@property (nonatomic) BOOL allowsImport;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) BOOL allowsSubitems;
@property (nonatomic) unsigned long long actionsState;
@property (nonatomic) BOOL allowsInvalidProperties;
@property (nonatomic) BOOL allowsToDos;
@property (readonly, nonatomic) BOOL isImporting;
@property (readonly, nonatomic) int eventUID;
@property (readonly, nonatomic) unsigned long long totalEventCount;
@property (readonly, nonatomic) unsigned long long unimportedEventCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0 eventStore:(id)a1 options:(unsigned long long)a2;
- (void)_databaseChanged:(id)a0;
- (BOOL)_anyCalendarsSupportingImport;
- (id)detailViewForEvent:(id)a0 eventInRealStore:(BOOL)a1 isUpdate:(BOOL)a2;
- (void)_createCancelButtonWithType:(long long)a0 target:(id)a1 action:(SEL)a2;
- (void)importAllRequested:(id)a0;
- (id)_defaultCalendarForImport;
- (BOOL)_calendarSupportsImport:(id)a0;
- (void)_enumerateSupportedCalendarsUsingBlock:(id /* block */)a0;
- (unsigned long long)_countOfCalendarsSupportingImport;
- (BOOL)_shouldShowCalendarChooser;
- (void)presentCalendarChooserForController:(id)a0;
- (void)importEventFromController:(id)a0 intoCalendar:(id)a1;
- (void)_updateCancelButton;
- (void)handleDidImportEvent:(id)a0 fromController:(id)a1 intoCalendar:(id)a2;
- (void)handleImportEventError;
- (void)eventViewController:(id)a0 didCompleteWithAction:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithData:(id)a0 eventStore:(id)a1 options:(unsigned long long)a2;
- (void)eventViewControllerDidRequestAddToCalendar:(id)a0;
- (BOOL)eventViewControllerShouldAlwaysShowNavBar:(id)a0;
- (BOOL)eventViewControllerShouldDismissSelf:(id)a0;
- (id)viewController;
- (id)initWithURL:(id)a0 eventStore:(id)a1;
- (id)initWithData:(id)a0 eventStore:(id)a1;
- (id)initWithEventUID:(int)a0 eventStore:(id)a1;
- (id)singleExistingEventUniqueID;
- (id)popoverContentController;
- (void)setCancelButtonWithTarget:(id)a0 action:(SEL)a1;
- (void)removeCancelButton;
- (void)icsPreviewListControllerDidRequestImportAll:(id)a0;
- (void)icsPreviewListController:(id)a0 didSelectEvent:(id)a1;
- (void)calendarChooserDidFinish:(id)a0;
- (void)calendarChooserDidCancel:(id)a0;
- (void)importAllIntoCalendar:(id)a0;

@end
