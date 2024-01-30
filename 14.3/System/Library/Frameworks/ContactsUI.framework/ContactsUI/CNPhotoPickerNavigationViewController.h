@class NSArray, CNPhotoPickerTrapView;

@interface CNPhotoPickerNavigationViewController : CNPortraitOnlyNavigationController

@property (retain, nonatomic) CNPhotoPickerTrapView *trapOverlayView;
@property (retain, nonatomic) NSArray *trapOverlayConstraints;
@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (nonatomic) BOOL disablingRotation;
@property (nonatomic) BOOL isShowingKeyboard;
@property (nonatomic) BOOL allowRotation;

- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)endDisablingAutorotation;
- (void)beginDisablingAutorotation;
- (BOOL)shouldDisplayTrapOverlayView;
- (BOOL)isDisplayingTrapView;
- (void)setupTrapOverlayView;
- (void)updateTrapOverlayViewIfNecessaryWithCoordinator:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithRootViewController:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)viewWillLayoutSubviews;

@end
