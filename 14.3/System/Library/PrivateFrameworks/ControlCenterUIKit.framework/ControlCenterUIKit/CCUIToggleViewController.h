@class UIColor, NSString, UIImageView, UIViewPropertyAnimator, CCUIToggleModule, UIImage, CCUICAPackageDescription;

@interface CCUIToggleViewController : CCUIButtonModuleViewController <CCUIContentModuleContentViewController> {
    UIImageView *_glyphImageView;
    UIImage *_glyphImage;
    UIImage *_selectedGlyphImage;
    UIColor *_selectedColor;
    CCUICAPackageDescription *_glyphPackageDescription;
    NSString *_glyphState;
}

@property (weak, nonatomic) CCUIToggleModule *module;
@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reconfigureView;
- (void)refreshState;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (BOOL)shouldFinishTransitionToExpandedContentModule;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
