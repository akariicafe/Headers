@class NSArray;

@interface NSSUsageData : NSObject

@property (readonly, nonatomic) unsigned long long capacityInBytes;
@property (readonly, nonatomic) unsigned long long usedStorageInBytes;
@property (readonly, nonatomic) unsigned long long availableStorageInBytes;
@property (readonly, nonatomic) float usageTimeInSeconds;
@property (readonly, nonatomic) float standbyTimeInSeconds;
@property (readonly, nonatomic) BOOL trusted;
@property (readonly, nonatomic) BOOL partiallyCharged;
@property (readonly, retain, nonatomic) NSArray *appBundleUsage;
@property (readonly, retain, nonatomic) NSArray *categories;

+ (id)newAppBundleFromBundleUsageMsg:(id)a0;
+ (id)newSizeFromMsg:(id)a0;
+ (id)newMsgFromSize:(id)a0;
+ (id)createLegacyUsageDictionary:(id)a0;
+ (id)createNSSUsageApp:(id)a0;
+ (id)createNSSUsageBundle:(id)a0;
+ (id)dedupeBundles:(id)a0;
+ (id)newAppBundleFromAppBundleMsg:(id)a0;
+ (id)newAppBundleFromAppUsageMsg:(id)a0;
+ (id)newAppBundleMsgFrom:(id)a0;
+ (id)newSizeCategoryMsgFrom:(id)a0;
+ (id)newUsageDataFromUsageRespMsg:(id)a0;
+ (id)newUsageRespMsgFrom:(id)a0;
+ (id)setUsageRespMsgFrom:(id)a0 usageRespMsg:(id)a1;

- (void).cxx_destruct;
- (id)initWithCapacity:(unsigned long long)a0 usedStorageInBytes:(unsigned long long)a1 available:(unsigned long long)a2 usageTimeInSeconds:(float)a3 standbyTimeInSeconds:(float)a4 trusted:(BOOL)a5 partiallyCharged:(BOOL)a6 appBundleUsage:(id)a7 categories:(id)a8;
- (id)initWithUsed:(unsigned long long)a0 available:(unsigned long long)a1 usageTimeInSeconds:(float)a2 standbyTimeInSeconds:(float)a3 trusted:(BOOL)a4 partiallyCharged:(BOOL)a5 appBundleUsage:(id)a6 categories:(id)a7;

@end
