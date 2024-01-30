@class UIColor;

@interface _GroupActivities_UIKit.GroupInteractionButton : UIView <UIPopoverPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ presentationContextProvider;
    void /* unknown type, empty encoding */ listContentProvider;
    void /* unknown type, empty encoding */ numberOfActiveParticipants;
    void /* unknown type, empty encoding */ button;
}

@property (nonatomic, retain) UIColor *tintColor;

- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)buttonTapped:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;

@end
