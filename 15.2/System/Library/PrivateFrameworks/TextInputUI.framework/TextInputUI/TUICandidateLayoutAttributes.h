@interface TUICandidateLayoutAttributes : UICollectionViewLayoutAttributes

@property (nonatomic) unsigned long long candidateNumber;
@property (nonatomic) double contentAlpha;
@property (nonatomic) unsigned long long row;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
