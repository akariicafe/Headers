@class NSString, EKEventStore, EKEvent, EKUIRecurrenceAlertController, UIViewController;
@protocol EKEditItemViewControllerProtocol, EKEventDetailItemDelegate;

@interface EKEventDetailItem : NSObject <EKEditItemViewControllerDelegate> {
    EKEventStore *_store;
    EKEvent *_event;
    EKEvent *_lastEventUpdated;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
}

@property (weak, nonatomic) id<EKEventDetailItemDelegate> delegate;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) int cellPosition;
@property (nonatomic) BOOL shouldIndent;
@property (retain, nonatomic) UIViewController<EKEditItemViewControllerProtocol> *viewController;
@property (weak, nonatomic) UIViewController *viewControllerToPresentFrom;
@property (readonly, nonatomic) BOOL requiresLayoutForSubitemCount;
@property (readonly, nonatomic) unsigned long long maximumNumberOfSubItems;
@property (readonly, nonatomic) BOOL detailItemVisibilityChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (void)notifySubitemDidSave:(unsigned long long)a0;
- (void)notifyDidStartEditing;
- (void)notifyDidEndEditing;
- (void)editItemViewController:(id)a0 didCompleteWithAction:(int)a1;
- (id)editItemEventToDetach;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned long long)a0;
- (void)eventViewController:(id)a0 tableViewDidScroll:(id)a1;
- (void)eventViewController:(id)a0 didHighlightSubitem:(unsigned long long)a1;
- (void)eventViewController:(id)a0 didUnhighlightSubitem:(unsigned long long)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (void)reset;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (void)refreshCopiedEvents;
- (void)dealloc;
- (void)layoutCellsForWidth:(double)a0 position:(int)a1;
- (BOOL)editItemViewControllerSave:(id)a0;
- (BOOL)editItemViewControllerShouldShowDetachAlert;
- (void)eventViewController:(id)a0 didSelectReadOnlySubitem:(unsigned long long)a1;
- (unsigned long long)numberOfSubitems;
- (void)eventViewController:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (void)setEvent:(id)a0 store:(id)a1;
- (BOOL)isPrivateEvent;
- (BOOL)isReadOnlyDelegateCalendar;
- (id)cellForSubitemAtIndex:(unsigned long long)a0 withTraitCollection:(id)a1;

@end
