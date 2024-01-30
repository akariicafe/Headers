@class PRXButton, UILayoutGuide, NSArray, UIView;
@protocol PRXTextContainer;

@interface PRXFeatureTourContentView : UIView {
    NSArray *_titleViewConstraints;
    NSArray *_bodyViewConstraints;
    NSArray *_dismissButtonConstraints;
    NSArray *_mainContentGuideConstraints;
}

@property (retain, nonatomic) UIView<PRXTextContainer> *titleView;
@property (retain, nonatomic) UIView<PRXTextContainer> *bodyView;
@property (retain, nonatomic) PRXButton *dismissButton;
@property (readonly, nonatomic) UILayoutGuide *mainContentGuide;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;

@end
