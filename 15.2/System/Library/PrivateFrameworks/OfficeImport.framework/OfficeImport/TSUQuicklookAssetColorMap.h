@class NSString, NSMutableDictionary;

@interface TSUQuicklookAssetColorMap : NSObject

@property (retain, nonatomic) NSMutableDictionary *assetMap;
@property (retain, nonatomic) NSString *appAssetPath;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)quicklookAssetMap;
+ (BOOL)hasAppAssets;
+ (id)colorForResource:(id)a0;
+ (id)locatorForSageChartTextureSet:(id)a0 image:(id)a1;

- (unsigned long long)retainCount;
- (id)retain;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;

@end
