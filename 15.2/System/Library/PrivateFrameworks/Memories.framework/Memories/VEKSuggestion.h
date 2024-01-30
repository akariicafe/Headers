@class PHAsset;

@interface VEKSuggestion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PHAsset *asset;
@property (nonatomic) long long usage;
@property (nonatomic) long long volume;
@property (nonatomic) long long specialTreatment;
@property (nonatomic) double reorderTimeOffset;


- (id)initWithAsset:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
