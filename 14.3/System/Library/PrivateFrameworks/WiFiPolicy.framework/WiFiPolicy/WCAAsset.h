@class ASAsset, NSString;

@interface WCAAsset : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long latestInstalledVersion;
@property (retain, nonatomic) ASAsset *latestInstalledAsset;
@property unsigned long long installedAssetVersion;
@property unsigned long long latestNotInstalledVersion;
@property (retain, nonatomic) ASAsset *latestNotInstalledAsset;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *extension;

+ (id)assetWithName:(id)a0 andExtension:(id)a1;
+ (id)wifiBehaviorPlistAsset;
+ (id)beaconsDataAsset;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)localInstalledURL;

@end
