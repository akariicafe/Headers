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

- (void)refreshState;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)reconfigureView;
- (BOOL)_canShowWhileLocked;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldFinishTransitionToExpandedContentModule;

@end
