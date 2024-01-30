@class _SWCollaborationButtonView, NSMapTable, NSTimer, NSArray, UIImage, NSString;
@protocol _SFBarManagerDelegate;

@interface _SFBarManager : NSObject {
    NSMapTable *_barToRegistrationMap;
    BOOL _deferUpdateAllRegistrations;
    BOOL _needsUpdateAllRegistrations;
    NSTimer *_coalescedUpdatesTimer;
    double _lastCoalescedUpdatesTime;
    id /* block */ _coalescedUpdatesBlock;
    NSArray *_itemConfigurationMap;
    UIImage *_customActivityImage;
    NSString *_customActivityAccessibilityLabel;
}

@property (weak, nonatomic) id<_SFBarManagerDelegate> delegate;
@property (nonatomic) long long contentMode;
@property (nonatomic) long long state;
@property (nonatomic) double downloadsItemProgress;
@property (retain, nonatomic) _SWCollaborationButtonView *collaborationButton;

- (void)barRegistration:(id)a0 didReceiveTapForBarItem:(long long)a1;
- (void)registerBar:(id)a0 withToken:(id)a1;
- (BOOL)isBarItemEnabled:(long long)a0;
- (void)performCoalescedUpdatesAnimated:(BOOL)a0 updates:(id /* block */)a1;
- (void)_updateAllRegistrationsAnimated:(BOOL)a0;
- (void)barRegistration:(id)a0 didReceiveTouchDownForBarItem:(long long)a1;
- (void)setBarItem:(long long)a0 attributedTitle:(id)a1;
- (BOOL)isBarItemHidden:(long long)a0;
- (id)test_registrationForBar:(id)a0;
- (void)setBarItem:(long long)a0 title:(id)a1;
- (void)pulseDownloadsItem;
- (unsigned long long)test_numberOfRegistrations;
- (void)_updateAllRegistrations;
- (void)setBarItem:(long long)a0 menu:(id)a1;
- (void)setImage:(id)a0 forBarItem:(long long)a1;
- (void)registerUnifiedBar:(id)a0 withPersona:(long long)a1;
- (BOOL)isBarItemSelected:(long long)a0;
- (void)setCustomActivityImage:(id)a0 accessibilityLabel:(id)a1;
- (void)setBarItem:(long long)a0 enabled:(BOOL)a1;
- (void)_invalidateCoalescedUpdatesTimer;
- (void)performCoalescedUpdates:(id /* block */)a0;
- (void)registerToolbar:(id)a0 withLayout:(long long)a1 persona:(long long)a2;
- (id)init;
- (BOOL)barRegistration:(id)a0 canHandleLongPressForBarItem:(long long)a1;
- (void)visibleBarItemsNeedUpdate;
- (void)barRegistration:(id)a0 didReceiveLongPressForBarItem:(long long)a1;
- (void)setBarItem:(long long)a0 hidden:(BOOL)a1;
- (void)_updateRegistrationWithToken:(id)a0 animated:(BOOL)a1;
- (void)performCoalescedUpdatesNowAnimated:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForBarItem:(long long)a0 inCoordinateSpace:(id)a1;
- (void).cxx_destruct;
- (void)setBarItem:(long long)a0 selected:(BOOL)a1;
- (void)setDownloadsItemNeedsLayout;

@end
