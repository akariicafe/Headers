@class EKCalendarItem, NSString, EKEventStore, UIResponder, UIViewController;
@protocol EKStyleProvider, EKCalendarItemEditItemDelegate, EKEditItemViewControllerProtocol;

@interface EKCalendarItemEditItem : NSObject <EKEditItemViewControllerDelegate> {
    EKEventStore *_store;
    UIViewController<EKEditItemViewControllerProtocol> *_viewController;
    EKCalendarItem *_calendarItem;
}

@property (weak, nonatomic) id<EKCalendarItemEditItemDelegate> delegate;
@property (retain, nonatomic) id<EKStyleProvider> styleProvider;
@property (retain, nonatomic) UIResponder *selectedResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)editItemViewControllerSave:(id)a0;
- (id)calendarItem;
- (BOOL)isInline;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)headerTitle;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (BOOL)editItemViewControllerShouldShowDetachAlert;
- (id)footerView;
- (void)applicationDidResume;
- (void).cxx_destruct;
- (id)footerTitle;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (void)addStylingToCell:(id)a0 forSubitemAtIndex:(unsigned long long)a1;
- (void)notifySubitemDidSave:(unsigned long long)a0;
- (void)notifyDidStartEditing;
- (void)notifyDidEndEditing;
- (void)notifyTextChanged;
- (void)editItemViewController:(id)a0 didCompleteWithAction:(int)a1;
- (id)editItemEventToDetach;
- (void)editItemViewControllerWantsKeyboardPinned:(BOOL)a0;
- (BOOL)usesDetailViewControllerForSubitem:(unsigned long long)a0;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (BOOL)editor:(id)a0 canSelectSubitem:(unsigned long long)a1;
- (void)editor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (BOOL)editor:(id)a0 shouldClearSelectionFromSubitem:(unsigned long long)a1;
- (BOOL)shouldAppearWithVisibility:(int)a0;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)a0;
- (void)editor:(id)a0 didStartEditingItem:(id)a1;
- (void)notifyRequiresHeightChange;
- (BOOL)configureForCalendarConstraints:(id)a0;
- (BOOL)prefersTargettedTableReloadOnSave;
- (BOOL)requiresReconfigurationOnSave;
- (BOOL)forceRefreshInviteesItemOnSave;
- (BOOL)forceRefreshLocationItemOnSave;
- (void)endInlineEditing;
- (void)setCalendarItem:(id)a0 store:(id)a1;
- (void)editor:(id)a0 didDeselectSubitem:(unsigned long long)a1;
- (BOOL)forceTableReloadOnSave;
- (double)footerHeightForWidth:(double)a0;
- (id)injectableViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (void)showViewController:(id)a0 editor:(id)a1 animated:(BOOL)a2;
- (BOOL)forceRefreshStartAndEndDatesOnSave;
- (BOOL)forceRefreshURLItemOnSave;
- (BOOL)forceRefreshAlarmItemOnSave;
- (void)prepareForReload;
- (id)cellForSubitemAtIndex:(unsigned long long)a0 inEditor:(id)a1;
- (void)editor:(id)a0 requestsInjectableViewControllerToBeShownForSubitem:(unsigned long long)a1;
- (void)editorDidScroll:(id)a0;
- (BOOL)shouldPinKeyboard;
- (id)viewForActionSheet;
- (id)trailingSwipeActionsConfigurationForRowAtIndex:(long long)a0;
- (void)tableViewDidScroll;

@end
