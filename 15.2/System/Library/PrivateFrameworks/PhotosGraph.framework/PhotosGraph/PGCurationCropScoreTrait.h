@interface PGCurationCropScoreTrait : PGCurationTrait

@property (nonatomic) double minimumSquareCropScore;

- (BOOL)isActive;
- (id)initWithMinimumSquareCropScore:(double)a0;

@end
