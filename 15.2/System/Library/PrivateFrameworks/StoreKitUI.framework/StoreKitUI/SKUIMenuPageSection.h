@class SKUIPopupMenuHeaderView, NSString, SKUIPillsControl, SKUIMenuViewController, UIPopoverController, SKUIMenuPageComponent, UIBarButtonItem, NSMutableIndexSet;

@interface SKUIMenuPageSection : SKUIStorePageSection <SKUIMenuViewControllerDelegate, SKUIPopupMenuDelegate, SKUISortDataRequestDelegate, UIPopoverControllerDelegate> {
    UIBarButtonItem *_cancelMenuItem;
    SKUIPillsControl *_pillsControl;
    SKUIMenuViewController *_moreListMenuViewController;
    UIPopoverController *_moreListPopoverController;
    SKUIPopupMenuHeaderView *_popupHeaderView;
    long long _selectedIndex;
    NSMutableIndexSet *_sortRequestIndexSet;
}

@property (readonly, nonatomic) SKUIMenuPageComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionContentInset;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (void).cxx_destruct;
- (long long)numberOfCells;
- (void)dealloc;
- (id)initWithPageComponent:(id)a0;
- (id)backgroundColorForIndexPath:(id)a0;
- (void)willAppearInContext:(id)a0;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (id)_contentChildView;
- (void)menuViewController:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)sortDataRequest:(id)a0 didFinishWithLockups:(id)a1;
- (void)_cancelMenuAction:(id)a0;
- (void)_setSelectedIndex:(long long)a0;
- (void)_dismissMenuViewController;
- (void)_restorePreviousSelection;
- (void)_showMoreList;
- (id)_pillsControl;
- (id)_popupHeaderView;
- (void)_pillAction:(id)a0;
- (void)_loadSortDataIfNecessaryForMenuIndex:(long long)a0 reason:(long long)a1;
- (id)_newMenuViewController;
- (void)_showMenuViewController;
- (void)_showPopoverController;
- (void)popupMenuHeader:(id)a0 didSelectMenuItemAtIndex:(long long)a1;

@end
