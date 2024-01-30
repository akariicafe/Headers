@interface JFXEffectAssetAttributes : NSObject <NSCopying>

@property (nonatomic) long long contentType;
@property (nonatomic) long long aspectRatio;
@property (nonatomic) long long usageMode;
@property (nonatomic) long long colorDynamicRange;
@property (nonatomic) long long quality;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (BOOL)isMatchingFilterAttributes:(id)a0;

@end
