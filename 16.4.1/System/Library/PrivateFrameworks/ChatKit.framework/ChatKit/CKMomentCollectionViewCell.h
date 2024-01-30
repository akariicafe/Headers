@class NSMutableArray, CKFullScreenEffect;

@interface CKMomentCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) CKFullScreenEffect *effect;
@property (retain, nonatomic) NSMutableArray *effectViews;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (void)animate;
- (void)stopAnimation;
- (void).cxx_destruct;
- (void)addEffectView:(id)a0;
- (void)setupEffectIfNeeded;

@end
