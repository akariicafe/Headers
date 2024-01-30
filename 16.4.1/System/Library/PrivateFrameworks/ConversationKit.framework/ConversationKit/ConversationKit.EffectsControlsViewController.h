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

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;

@end
