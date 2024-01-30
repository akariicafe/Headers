@interface ConversationKit.EffectsControlsViewController : UIViewController {
    void /* unknown type, empty encoding */ effectsBrowserViewController;
    void /* unknown type, empty encoding */ effectsEnabled;
    void /* unknown type, empty encoding */ effectsBrowserHeight;
    void /* unknown type, empty encoding */ constraintsToUpdate;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ backgroundBlurView;
}

@property (nonatomic) void /* unknown type, empty encoding */ effectsButtonIsVisible;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ effectsButton;

- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
