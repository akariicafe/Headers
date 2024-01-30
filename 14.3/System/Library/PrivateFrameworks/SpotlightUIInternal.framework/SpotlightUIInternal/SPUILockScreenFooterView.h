@class TLKTextButton;

@interface SPUILockScreenFooterView : NUIContainerBoxView

@property (retain) TLKTextButton *unlockScreenButton;

- (id)init;
- (void).cxx_destruct;
- (void)unlockButtonPressed:(id)a0;
- (void)updateTitle;

@end
