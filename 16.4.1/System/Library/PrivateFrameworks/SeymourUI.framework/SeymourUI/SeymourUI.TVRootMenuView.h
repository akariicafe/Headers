@class NSArray;

@interface SeymourUI.TVRootMenuView : UIView {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ signInButton;
    void /* unknown type, empty encoding */ signOutView;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ focusContainerGuide;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) BOOL canBecomeFocused;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
