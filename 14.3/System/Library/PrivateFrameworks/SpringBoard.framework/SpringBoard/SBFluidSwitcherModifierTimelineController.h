@class UIWindow, SBFluidSwitcherModifierTimelineViewController;

@interface SBFluidSwitcherModifierTimelineController : NSObject {
    UIWindow *_window;
    SBFluidSwitcherModifierTimelineViewController *_rootViewController;
}

@property (nonatomic, getter=isVisible) BOOL visible;

- (void).cxx_destruct;
- (void)addEntry:(id)a0;

@end
