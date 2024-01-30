@class NSTimer, NSMapTable, NSArray;
@protocol _SFBarManagerDelegate;

@interface _SFBarManager : NSObject {
    NSMapTable *_barToRegistrationMap;
    BOOL _deferUpdateAllRegistrations;
    BOOL _needsUpdateAllRegistrations;
    NSTimer *_coalescedUpdatesTimer;
    double _lastCoalescedUpdatesTime;
    id /* block */ _coalescedUpdatesBlock;
    NSArray *_itemConfigurationMap;
}

@property (weak, nonatomic) id<_SFBarManagerDelegate> delegate;
@property (nonatomic, getter=isBookmarksItemSelected) BOOL bookmarksItemSelected;
@property (nonatomic) double downloadsItemProgress;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)test_numberOfRegistrations;
- (void)_updateRegistration:(id)a0;
- (BOOL)isBarItemEnabled:(long long)a0;
- (id)test_registrationForBar:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForBarItem:(long long)a0 inCoordinateSpace:(id)a1;
- (void)registerToolbar:(id)a0 withLayout:(long long)a1 persona:(unsigned long long)a2;
- (void)visibleBarItemsNeedUpdate;
- (void)pulseDownloadsItem;
- (void)setDownloadsItemNeedsLayout;
- (void)barRegistration:(id)a0 didReceiveLongPressForBarItem:(long long)a1;
- (void)_performCoalescedUpdatesNow;
- (BOOL)barRegistration:(id)a0 canHandleLongPressForBarItem:(long long)a1;
- (BOOL)isBarItemHidden:(long long)a0;
- (void)_updateAllRegistrations;
- (void)setBarItem:(long long)a0 menuProvider:(id /* block */)a1;
- (void)setBarItem:(long long)a0 hidden:(BOOL)a1;
- (void)performCoalescedUpdates:(id /* block */)a0;
- (void)barRegistration:(id)a0 didReceiveTouchDownForBarItem:(long long)a1;
- (void)_invalidateCoalescedUpdatesTimer;
- (void)setBarItem:(long long)a0 enabled:(BOOL)a1;
- (void)barRegistration:(id)a0 didReceiveTapForBarItem:(long long)a1;

@end
