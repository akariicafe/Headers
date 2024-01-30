@class UIView;

@interface PRXMovieContentViewController : PRXCardContentViewController

@property (readonly, nonatomic) UIView *movieView;
@property (readonly, nonatomic) struct CGSize { double width; double height; } movieDimensions;
@property (readonly, nonatomic) double productHeight;
@property (nonatomic) BOOL shouldFadeInElementsOnAppear;
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeInDelay;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)fadeInAuxiliaryViewsOverDuration:(double)a0 delay:(double)a1 completion:(id /* block */)a2;
- (void)hideAuxiliaryViews;
- (id)initWithMovieView:(id)a0 movieDimensions:(struct CGSize { double x0; double x1; })a1 productHeight:(double)a2;
- (void)setAuxiliaryViewsAlpha:(double)a0;

@end
