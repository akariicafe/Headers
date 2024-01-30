@class NSMutableArray, CKFullScreenEffect;

@interface CKMomentCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) CKFullScreenEffect *effect;
@property (retain, nonatomic) NSMutableArray *effectViews;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)animate;
- (void)prepareForReuse;
- (void)addEffectView:(id)a0;
- (void)setupEffectIfNeeded;
- (void)stopAnimation;

@end
