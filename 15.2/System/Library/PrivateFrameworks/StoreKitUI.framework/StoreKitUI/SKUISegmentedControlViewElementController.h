@class UIView, NSString, SKUISegmentedControlViewElement, SKUIMenuViewController, SKUIClientContext, SKUIMenuPopoverController, SKUIFlexibleSegmentedControl, UIViewController, UIBarButtonItem;

@interface SKUISegmentedControlViewElementController : NSObject <SKUIFlexibleSegmentedControlDelegate, SKUIMenuPopoverDelegate, SKUIMenuViewControllerDelegate> {
    UIBarButtonItem *_menuSheetCancelButtonItem;
    SKUIMenuViewController *_menuSheetViewController;
    SKUIMenuPopoverController *_popoverMenuViewController;
    SKUIFlexibleSegmentedControl *_segmentedControl;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (nonatomic) long long defaultMaximumNumberOfVisibleItems;
@property (nonatomic) double desiredSegmentWidth;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (readonly, nonatomic) UIView *segmentedControlView;
@property (readonly, nonatomic) SKUISegmentedControlViewElement *viewElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_segmentedControl;
- (id)initWithViewElement:(id)a0;
- (void)reloadAfterDocumentUpdate;
- (id)initWithViewElement:(id)a0 segmentedControl:(id)a1;
- (void)menuPopoverDidCancel:(id)a0;
- (void)menuPopover:(id)a0 didSelectMenuItemAtIndex:(long long)a1;
- (void)menuPopover:(id)a0 willRepositionToRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inView:(inout id *)a2;
- (void)_destroyPopoverController;
- (void)menuViewController:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)_connectToSegmentedControl:(id)a0;
- (void)_reloadPropertiesForSegmentedControl:(id)a0;
- (void)_showPopoverMoreListWithTitles:(id)a0;
- (void)_showMoreListSheetWithTitles:(id)a0 selectedIndex:(long long)a1;
- (void)_destroyMenuSheetViewController;
- (void)_cancelMenuAction:(id)a0;
- (void)segmentedControl:(id)a0 didSelectSegmentIndex:(long long)a1;
- (void)segmentedControl:(id)a0 showMoreListWithTitles:(id)a1;

@end
