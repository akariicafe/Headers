@interface TUICandidateLayoutAttributes : UICollectionViewLayoutAttributes

@property (nonatomic) unsigned long long candidateNumber;
@property (nonatomic) double contentAlpha;
@property (nonatomic) unsigned long long row;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
