@class EKEvent, NSMutableArray;
@protocol EKEditItemViewControllerDelegate;

@interface EKUIEventDiffViewController : EKEventViewController <EKEventTitleDetailItemDelegate, EKEventDetailNotesCellDelegate, EKEditItemViewControllerProtocol> {
    NSMutableArray *_items;
}

@property (retain) EKEvent *originalEvent;
@property (weak, nonatomic) id<EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) BOOL useCustomBackButton;

- (void).cxx_destruct;
- (void)apply;
- (void)_updateNavBarAnimated:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)editButtonPressed;
- (id)_items;
- (id)initWithOriginalEvent:(id)a0 newEvent:(id)a1;
- (id)_statusButtons;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (id)title;
- (BOOL)shouldShowEditButtonInline;

@end
