@class NSString;

@interface SFSSResourceAsset : NSObject

@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, nonatomic) long long contentVersion;
@property (copy, nonatomic) NSString *assetPath;

+ (id)generateResourceAssetFromResourceKeyString:(id)a0;

- (id)key;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)init:(id)a0 contentVersion:(long long)a1;

@end
