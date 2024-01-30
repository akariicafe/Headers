@class NSArray, UIImage, PUImportOneUpCellBadgeView, PXImportMediaProvider;

@interface PUImportOneUpTransitionView : PUImportOneUpCell <PUImportOneUpCellDisplayDelegate>

@property (retain, nonatomic) UIImage *startingImage;
@property (retain, nonatomic) PXImportMediaProvider *mediaProvider;
@property (readonly, nonatomic) PUImportOneUpCellBadgeView *badgeView;
@property (readonly, nonatomic) NSArray *badgeViewOffsetConstraints;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetFrame;
@property (nonatomic) double initialPhotoViewAlpha;
@property (nonatomic) double targetPhotoViewAlpha;

+ (double)interpolatedValueBetweenInitialValue:(double)a0 andFinalValue:(double)a1 atProgress:(double)a2;

- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)updateConstraints;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (double)currentProgress;
- (void)updateBadgeView;
- (void)importOneUpCell:(id)a0 didRequestCancellationOfThumbnailRequestWithID:(long long)a1;
- (void *)contextForObservingViewModelChanges;
- (void)importOneUpCell:(id)a0 requestedBadgeUpdateForImportItem:(id)a1;
- (long long)importOneUpCell:(id)a0 requestedThumbnailForImportItem:(id)a1 completion:(id /* block */)a2;
- (id)initWithImportItem:(id)a0 startingImage:(id)a1 mediaProvider:(id)a2;
- (void)setInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setPhotoViewInitialAlpha:(double)a0 targetAlpha:(double)a1;
- (void)updateAlphaIfNeeded;

@end
