@class NSString;

@interface _ATXPredictionModelDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long assetCompatibilityVersion;
@property (nonatomic) long long assetVersion;
@property (retain, nonatomic) NSString *abGroup;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAssetCompatibilityVersion:(long long)a0 assetVersion:(long long)a1 abGroup:(id)a2;

@end
