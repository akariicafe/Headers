@class NSArray, PUStackView;

@interface PUDuplicatePreviewViewController : UIViewController {
    PUStackView *_stackView;
}

@property (copy, nonatomic) NSArray *assets;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillImageTime;

- (void)viewDidLoad;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void).cxx_destruct;
- (id)initWithAssets:(id)a0 stillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_handleImageResult:(id)a0 info:(id)a1 forIndex:(int)a2;
- (void)_handleVideoResult:(id)a0 info:(id)a1 forIndex:(int)a2;

@end
