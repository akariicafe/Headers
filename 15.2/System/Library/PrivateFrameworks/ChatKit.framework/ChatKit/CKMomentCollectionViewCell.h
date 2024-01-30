@class NSMutableArray, CKFullScreenEffect;

@interface CKMomentCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) CKFullScreenEffect *effect;
@property (retain, nonatomic) NSMutableArray *effectViews;

+ (id)reuseIdentifier;

- (void)animate;
- (void)addEffectView:(id)a0;
- (void)setupEffectIfNeeded;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)stopAnimation;

@end
