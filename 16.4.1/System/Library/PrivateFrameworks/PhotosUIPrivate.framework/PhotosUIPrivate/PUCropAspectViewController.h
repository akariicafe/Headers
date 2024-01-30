@class NSArray, PUCropToolControllerSpec, UIScrollView, UIView, PUCropAspect;
@protocol PUCropAspectViewControllerDelegate;

@interface PUCropAspectViewController : UIViewController

@property (retain, nonatomic) UIView *scrollViewContainer;
@property (retain, nonatomic) UIView *buttonContainer;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSArray *aspectButtons;
@property (retain, nonatomic) NSArray *allAspectRatios;
@property (nonatomic) struct CGSize { double width; double height; } originalSize;
@property (retain, nonatomic) PUCropToolControllerSpec *spec;
@property (retain, nonatomic) NSArray *aspectConstraints;
@property (nonatomic) struct CGSize { double width; double height; } currentCropSize;
@property (retain, nonatomic) PUCropAspect *currentCropAspect;
@property (weak, nonatomic) id<PUCropAspectViewControllerDelegate> delegate;
@property (nonatomic) long long aspectOrientation;
@property (nonatomic) long long layoutOrientation;
@property (retain, nonatomic) UIView *scrollExtraLeftView;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)aspectButtonPressed:(id)a0;
- (id)initWithLayoutOrientation:(long long)a0 originalSize:(struct CGSize { double x0; double x1; })a1 currentSize:(struct CGSize { double x0; double x1; })a2 currentCropAspect:(id)a3 spec:(id)a4;
- (id)matchingCropAspectTo:(id)a0;
- (void)updateAspectButtonSelection;
- (void)updateAspectButtons;
- (void)updateAspectConstraints;

@end
