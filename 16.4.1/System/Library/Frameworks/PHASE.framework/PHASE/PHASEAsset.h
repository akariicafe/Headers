@class NSString, PHASEAssetRegistry;

@interface PHASEAsset : NSObject

@property (weak) PHASEAssetRegistry *assetRegistry;
@property (readonly) NSString *uid;
@property (readonly) NSString *identifier;

+ (id)new;

- (void)setUid:(id)a0;
- (id)uid;
- (id)init;
- (void).cxx_destruct;
- (id)initWithUID:(id)a0 assetRegistry:(id)a1;

@end
