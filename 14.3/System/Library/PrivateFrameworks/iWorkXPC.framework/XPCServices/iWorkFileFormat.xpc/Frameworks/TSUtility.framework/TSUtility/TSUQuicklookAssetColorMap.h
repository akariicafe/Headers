@class NSString, NSMutableDictionary;

@interface TSUQuicklookAssetColorMap : NSObject

@property (retain, nonatomic) NSMutableDictionary *assetMap;
@property (retain, nonatomic) NSString *appAssetPath;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)quicklookAssetMap;
+ (BOOL)hasAppAssets;
+ (id)colorForResource:(id)a0;
+ (id)locatorForSageChartTextureSet:(id)a0 image:(id)a1;

- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)retain;

@end
