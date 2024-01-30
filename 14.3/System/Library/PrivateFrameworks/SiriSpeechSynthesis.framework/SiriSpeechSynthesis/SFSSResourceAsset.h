@class NSString;

@interface SFSSResourceAsset : NSObject

@property (copy, nonatomic) NSString *assetPath;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, nonatomic) long long contentVersion;

+ (id)generateResourceAssetFromResourceKeyString:(id)a0;

- (void).cxx_destruct;
- (id)key;
- (id)init:(id)a0 contentVersion:(long long)a1;

@end
