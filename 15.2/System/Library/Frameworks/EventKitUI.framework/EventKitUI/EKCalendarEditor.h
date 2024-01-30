@class EKSource, EKCalendarColorEditItem, EKCalendarShareesEditItem;

@interface EKCalendarEditor : EKAbstractCalendarEditor {
    EKCalendarShareesEditItem *_shareesEditItem;
    EKCalendarColorEditItem *_colorEditItem;
    unsigned long long _entityType;
    EKSource *_limitedToSource;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)_deleteClicked:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)loadEditItems;
- (void)calendarItemStartedEditing:(id)a0;
- (id)initWithCalendar:(id)a0 eventStore:(id)a1 entityType:(unsigned long long)a2 limitedToSource:(id)a3;
- (BOOL)_shouldShowDeleteButton;
- (void)_deleteCalendar;

@end
