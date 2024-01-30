@class NSString, NSIndexPath, UITapGestureRecognizer;
@protocol PUFeedCellDelegate;

@interface PUFeedCell : UICollectionViewCell <UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) NSString *representedElementKind;
@property (retain, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer;
@property (weak, nonatomic) id<PUFeedCellDelegate> delegate;
@property (nonatomic, getter=isTappable) BOOL tappable;
@property (nonatomic) struct CGPoint { double x; double y; } parallaxOffset;
@property (nonatomic) struct CGPoint { double x; double y; } edgeParallaxOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectWithAspectRatio:(double)a0 fillingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 parallaxOffset:(struct CGPoint { double x0; double x1; })a2 edgeParallaxOffset:(struct CGPoint { double x0; double x1; })a3;

- (void).cxx_destruct;
- (void)dealloc;
- (void)applyLayoutAttributes:(id)a0;
- (BOOL)shouldRecognizerTap:(id)a0;
- (void)_handleTap:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_updateTapGestureRecognizer;

@end
