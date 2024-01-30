@class PHAsset;

@interface VEKSuggestion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PHAsset *asset;
@property (nonatomic) long long usage;
@property (nonatomic) long long volume;
@property (nonatomic) long long specialTreatment;
@property (nonatomic) double reorderTimeOffset;


- (void).cxx_destruct;
- (id)description;
- (id)initWithAsset:(id)a0;

@end
