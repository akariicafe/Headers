@class NSIndexPath, PUGridMagnifiedView;

@interface PUGridMagnifiedImageViewController : UIViewController

@property (retain, nonatomic) PUGridMagnifiedView *magnifiedView;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (weak, nonatomic) id delegate;
@property (nonatomic) struct CGPoint { double x; double y; } gestureWindLocation;
@property (retain, nonatomic) NSIndexPath *itemIndexPath;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } itemWindFrame;
@property (readonly, nonatomic) BOOL canShowFullScreen;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } trackingWindFrame;
@property (nonatomic) double magnifiedYOffset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } magnifiedDragEdgeInsets;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CGSize { double width; double height; } magnifiedSize;
@property (nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (nonatomic) double shadowRadius;
@property (nonatomic) double shadowOpacity;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)prepareForRelease;
- (void)beginMagnificationAnimated:(BOOL)a0;
- (void)continueMagnification;
- (BOOL)gestureInNewLocation;
- (void)hideMagnifiedThumbnailWithAnimation:(BOOL)a0;
- (id)imageForIndexPath:(id)a0;
- (id)imageForMagnifyLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)installMagnifiedView;
- (BOOL)isValidMagnifyLocation:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })magnifiedImageWindFrame;
- (void)setupMagnifiedView;

@end
