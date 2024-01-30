@class NSString, NSDictionary;

@interface _DECABHelper : NSObject

@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) NSDictionary *abGroupContents;

+ (void)initialize;
+ (void)setStaticIndexForDevice:(unsigned char)a0;
+ (unsigned char)indexForDevice;
+ (unsigned long long)cachedSaltedIndex:(unsigned long long)a0;
+ (void)setDefaultDeviceIndexPolicy;
+ (id)decDeviceId;
+ (unsigned long long)saltedIndex:(unsigned long long)a0;
+ (void)setIndexForDevice:(id /* block */)a0;
+ (unsigned long long)randomSaltedIndex:(unsigned long long)a0;
+ (unsigned long long)incrementalSaltedIndex:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAssetContents:(id)a0;
- (id)initWithAssetContents:(id)a0 indexForDevice:(unsigned char)a1;
- (id)initWithAssetsForResource:(id)a0 ofType:(id)a1 specifiedABGroup:(id)a2;
- (id)initWithAssetContents:(id)a0 specifiedABGroup:(id)a1 indexForDevice:(unsigned char)a2;
- (id)initWithAssetsForResource:(id)a0 ofType:(id)a1;

@end
