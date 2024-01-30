@class NSDictionary;

@interface MAAutoAssetInfoStaging : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *allAvailableForStagingAttributes;
@property (readonly, nonatomic) unsigned long long totalExpectedBytes;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAvailableForStaging:(id)a0 withTotalExpectedBytes:(unsigned long long)a1;

@end
