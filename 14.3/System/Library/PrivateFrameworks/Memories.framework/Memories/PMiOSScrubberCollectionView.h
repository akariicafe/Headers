@protocol PMiOSScrubberCollectionViewDelegate;

@interface PMiOSScrubberCollectionView : UICollectionView

@property (weak, nonatomic) id<PMiOSScrubberCollectionViewDelegate> collectionViewDelegate;

- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
