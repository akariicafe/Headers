@class SFDownloadsBarButtonItem, NSString, NSOrderedSet, UIToolbar, _SFBarManager, NSMutableSet, UIBarButtonItem;

@interface SFBarRegistration : UIResponder <_SFBarRegistrationToken> {
    NSOrderedSet *_arrangedBarItems;
    UIToolbar *_bar;
    _SFBarManager *_barManager;
    NSMutableSet *_hiddenBarItems;
    NSOrderedSet *_lastCommittedArrangedBarItems;
    long long _layout;
    UIBarButtonItem *_backItem;
    UIBarButtonItem *_bookmarksItem;
    SFDownloadsBarButtonItem *_downloadsItem;
    UIBarButtonItem *_forwardItem;
    UIBarButtonItem *_newTabItem;
    UIBarButtonItem *_shareItem;
    UIBarButtonItem *_tabExposeItem;
    UIBarButtonItem *_openInSafariItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void).cxx_destruct;
- (void)_itemReceivedTap:(id)a0;
- (id)_effectiveArrangedBarItems;
- (void)setDownloadsItemProgress:(double)a0;
- (BOOL)containsBarItem:(long long)a0;
- (BOOL)_arrangedBarItemsNeedUpdate;
- (id)_UIBarButtonItemsForArrangedBarItems:(id)a0;
- (id)_UIBarButtonItemForBarItem:(long long)a0;
- (void)pulseDownloadsItem;
- (void)setBookmarksItemSelected:(BOOL)a0;
- (long long)_barItemForUIBarButtonItem:(id)a0;
- (void)_itemReceivedTouchDown:(id)a0;
- (void)_itemReceivedLongPress:(id)a0;
- (void)setBarItem:(long long)a0 hidden:(BOOL)a1;
- (void)updateArrangedUIBarButtonItemsIfNeeded;
- (id)UIBarButtonItemForItem:(long long)a0;
- (id)popoverSourceInfoForItem:(long long)a0;
- (void)setBarItem:(long long)a0 enabled:(BOOL)a1;
- (id)_newBarButtonItemForSFBarItem:(long long)a0;
- (id)initWithBar:(id)a0 barManager:(id)a1 layout:(long long)a2 persona:(unsigned long long)a3;

@end
