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
    UIBarButtonItem *_customActivityItem;
}

@property (nonatomic) long long contentMode;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long pageFormatItemState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)containsBarItem:(long long)a0;
- (void)pulseDownloadsItem;
- (void)_itemReceivedTouchDown:(id)a0;
- (void)setDownloadsItemProgress:(double)a0;
- (id)_UIBarButtonItemForBarItem:(long long)a0;
- (void)updateArrangedUIBarButtonItemsIfNeeded;
- (void)updateBarAnimated:(BOOL)a0;
- (long long)_barItemForUIBarButtonItem:(id)a0;
- (id)_UIBarButtonItemsForArrangedBarItems:(id)a0;
- (void)setCustomActivityImage:(id)a0 accessibilityLabel:(id)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)popoverSourceInfoForItem:(long long)a0;
- (void)setProgress:(double)a0 forBarItem:(long long)a1;
- (void).cxx_destruct;
- (void)setBarItem:(long long)a0 hidden:(BOOL)a1;
- (BOOL)_arrangedBarItemsNeedUpdate;
- (void)setMenuProvider:(id /* block */)a0 forBarItem:(long long)a1;
- (void)_itemReceivedTap:(id)a0;
- (id)_effectiveArrangedBarItems;
- (void)_updateTitlesAndMenus;
- (void)setBarItem:(long long)a0 enabled:(BOOL)a1;
- (void)_itemReceivedLongPress:(id)a0;
- (id)_newBarButtonItemForSFBarItem:(long long)a0;
- (void)setBarItem:(long long)a0 selected:(BOOL)a1;
- (id)UIBarButtonItemForItem:(long long)a0;
- (id)initWithBar:(id)a0 barManager:(id)a1 layout:(long long)a2 persona:(unsigned long long)a3;
- (void)pulseBarItem:(long long)a0;

@end
