@class MAAsset, NSString;

@interface WCAAsset : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long latestInstalledVersion;
@property (retain, nonatomic) MAAsset *latestInstalledAsset;
@property unsigned long long installedAssetVersion;
@property unsigned long long latestNotInstalledVersion;
@property (retain, nonatomic) MAAsset *latestNotInstalledAsset;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *extension;

+ (id)assetWithName:(id)a0 andExtension:(id)a1;
+ (id)wifiBehaviorPlistAsset;
+ (id)beaconsDataAsset;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
