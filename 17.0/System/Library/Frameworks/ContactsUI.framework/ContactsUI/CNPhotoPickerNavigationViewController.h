@class NSArray, CNPhotoPickerTrapView;

@interface CNPhotoPickerNavigationViewController : CNPortraitOnlyNavigationController

@property (retain, nonatomic) CNPhotoPickerTrapView *trapOverlayView;
@property (retain, nonatomic) NSArray *trapOverlayConstraints;
@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (nonatomic) BOOL disablingRotation;
@property (nonatomic) BOOL isShowingKeyboard;
@property (nonatomic) BOOL allowRotation;

- (id)initWithRootViewController:(id)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)keyboardWillShow:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)keyboardWillHide:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)beginDisablingAutorotation;
- (void)endDisablingAutorotation;
- (void)endDisablingAutorotationIfNeeded;
- (BOOL)isDisplayingTrapView;
- (void)setupTrapOverlayView;
- (BOOL)shouldDisplayTrapOverlayView;
- (void)updateTrapOverlayViewIfNecessaryWithCoordinator:(id)a0;

@end
