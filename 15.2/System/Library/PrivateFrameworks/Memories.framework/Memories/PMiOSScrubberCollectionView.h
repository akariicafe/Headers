@protocol PMiOSScrubberCollectionViewDelegate;

@interface PMiOSScrubberCollectionView : UICollectionView

@property (weak, nonatomic) id<PMiOSScrubberCollectionViewDelegate> collectionViewDelegate;

- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
