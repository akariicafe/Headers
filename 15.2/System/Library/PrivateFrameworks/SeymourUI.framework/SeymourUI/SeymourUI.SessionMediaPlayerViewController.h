@class NSArray;

@interface SeymourUI.SessionMediaPlayerViewController : AVPlayerViewController {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ airplayAndSettingsControlsView;
    void /* unknown type, empty encoding */ settingsControlItem;
    void /* unknown type, empty encoding */ gymKitResumeMachineView;
    void /* unknown type, empty encoding */ settingsPopoverSourceView;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ videoBoundsObserver;
}

@property (nonatomic, readonly) NSArray *keyCommands;

- (void)didTapMediaPlayerViewWithTapGestureRecognizer:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithPlayerLayerView:(id)a0;

@end
