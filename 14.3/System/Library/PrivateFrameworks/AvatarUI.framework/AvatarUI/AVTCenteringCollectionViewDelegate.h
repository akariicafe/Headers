@class UISelectionFeedbackGenerator, NSString, UICollectionView, UICollectionViewLayoutAttributes, NSIndexPath;
@protocol UICollectionViewDelegate, AVTUILogger;

@interface AVTCenteringCollectionViewDelegate : NSObject <UICollectionViewDelegate>

@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, weak, nonatomic) id<UICollectionViewDelegate> delegate;
@property (retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator;
@property (nonatomic) struct CGPoint { double x; double y; } previousOffset;
@property (retain, nonatomic) NSIndexPath *lastHapticOnScrollIndexPath;
@property (retain, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) UICollectionViewLayoutAttributes *centerItemAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithCollectionView:(id)a0 delegate:(id)a1 environment:(id)a2;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewWillBeginDragging:(id)a0;

@end
