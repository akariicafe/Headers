@class HUScrollGestureRecognitionResolver;

@interface HUQuickControlCollectionView : UICollectionView

@property (readonly, nonatomic) HUScrollGestureRecognitionResolver *scrollGestureResolver;

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (BOOL)touchesShouldCancelInContentView:(id)a0;

@end
