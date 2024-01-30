@class MAAutoAssetSelector, NSDictionary, NSURL, MAAutoAssetStatus;

@interface MAAutoAssetInfoFound : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MAAutoAssetSelector *fullAssetSelector;
@property (readonly, nonatomic) NSURL *localContentURL;
@property (readonly, nonatomic) NSDictionary *assetAttributes;
@property (readonly, nonatomic) MAAutoAssetStatus *currentStatus;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initForSelector:(id)a0 withLocalContentURL:(id)a1 withAssetAttributes:(id)a2 reportingStatus:(id)a3;
- (id)description;
- (void).cxx_destruct;

@end
