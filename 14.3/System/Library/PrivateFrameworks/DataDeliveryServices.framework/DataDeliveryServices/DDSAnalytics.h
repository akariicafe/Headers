@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface DDSAnalytics : NSObject

@property (readonly, nonatomic) NSMutableDictionary *analyticByIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *analyticQueue;

+ (id)sharedInstance;
+ (id)roundNumber:(id)a0 toSignificantDigits:(id)a1;
+ (BOOL)isInteger:(id)a0;

- (id)processName;
- (id)init;
- (void).cxx_destruct;
- (id)stringForAction:(int)a0;
- (void)reportAssetDownloadAnalytic:(id)a0;
- (id)bucketForValue:(id)a0 fromBuckets:(id)a1;
- (void)cancelRecordingForAsset:(id)a0;
- (void)recordAssetAction:(int)a0 forAsset:(id)a1;
- (void)recordUpdateCycleState:(int)a0;
- (void)reportUpdateCycleAnalytic:(id)a0;
- (void)dumpAssetLogWithInstalledAssets:(id)a0;

@end
