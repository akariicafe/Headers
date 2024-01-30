@class UIWindow, SBFluidSwitcherModifierTimelineViewController;

@interface SBFluidSwitcherModifierTimelineController : NSObject {
    UIWindow *_window;
    SBFluidSwitcherModifierTimelineViewController *_rootViewController;
}

@property (nonatomic, getter=isVisible) BOOL visible;

- (void)addEntry:(id)a0;
- (void).cxx_destruct;

@end
