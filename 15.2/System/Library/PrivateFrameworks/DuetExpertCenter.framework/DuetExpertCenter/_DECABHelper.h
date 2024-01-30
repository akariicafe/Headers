@class NSString, NSDictionary;

@interface _DECABHelper : NSObject

@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) NSDictionary *abGroupContents;

+ (void)initialize;
+ (void)setDefaultDeviceIndexPolicy;
+ (unsigned long long)cachedSaltedIndex:(unsigned long long)a0;
+ (void)setStaticIndexForDevice:(unsigned char)a0;
+ (unsigned long long)saltedIndex:(unsigned long long)a0;
+ (id)decDeviceId;
+ (unsigned char)indexForDevice;
+ (void)setIndexForDevice:(id /* block */)a0;
+ (unsigned long long)randomSaltedIndex:(unsigned long long)a0;
+ (unsigned long long)incrementalSaltedIndex:(unsigned long long)a0;

- (id)initWithAssetContents:(id)a0;
- (id)initWithAssetContents:(id)a0 specifiedABGroup:(id)a1 indexForDevice:(unsigned char)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAssetsForResource:(id)a0 ofType:(id)a1;
- (id)initWithAssetContents:(id)a0 indexForDevice:(unsigned char)a1;
- (id)initWithAssetsForResource:(id)a0 ofType:(id)a1 specifiedABGroup:(id)a2;

@end
