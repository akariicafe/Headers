@class NSDate, PUAssetReference;

@interface PUAssetDisplayDescriptor : NSObject

@property (readonly, nonatomic) PUAssetReference *assetReference;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoSeekTime;
@property (readonly, nonatomic) NSDate *modifiedAfterDate;

+ (id)assetDisplayDescriptorForSimpleNavigationToAssetReference:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAssetReference:(id)a0 modifiedAfterDate:(id)a1 videoSeekTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

@end
