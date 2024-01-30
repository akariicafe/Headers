@protocol MobileSafariWindowDelegate;

@interface MobileSafariWindow : UIWindow {
    BOOL _safariWindowDelegateRespondsToStatusBarChangedFromHeightToHeight;
    BOOL _safariWindowDelegateRespondsToDidEndAllTouchesAtPoint;
    BOOL _shouldBecomeKeyWindowAfterSnapshot;
}

@property (weak, nonatomic) id<MobileSafariWindowDelegate> safariWindowDelegate;

- (void)sendEvent:(id)a0;
- (void)_willBeginSystemSnapshot;
- (void)handleStatusBarChangeFromHeight:(double)a0 toHeight:(double)a1;
- (void).cxx_destruct;
- (void)_didCompleteSystemSnapshot;
- (id)initWithWindowScene:(id)a0;

@end
