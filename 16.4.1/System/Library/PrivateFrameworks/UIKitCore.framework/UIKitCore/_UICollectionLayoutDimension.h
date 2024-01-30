@interface _UICollectionLayoutDimension : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting> {
    long long _semantic;
    double _dimension;
}

@property (readonly, nonatomic) double dimension;
@property (readonly, nonatomic) BOOL isAbsolute;
@property (readonly, nonatomic) BOOL isEstimated;
@property (readonly, nonatomic) BOOL isFractionalWidth;
@property (readonly, nonatomic) BOOL isFractionalHeight;

+ (id)absolute:(double)a0;
+ (id)estimated:(double)a0;
+ (id)fractionalHeight:(double)a0;
+ (id)fractionalWidth:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_apiRepresentation;
- (id)initWithSemantic:(long long)a0 dimension:(double)a1;

@end
