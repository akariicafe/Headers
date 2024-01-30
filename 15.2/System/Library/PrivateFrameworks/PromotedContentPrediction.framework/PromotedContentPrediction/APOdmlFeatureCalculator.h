@class NSString, APOdmlXpcLifecycleHandler, NSURL, NSDate, APOdmlAssetManager;

@interface APOdmlFeatureCalculator : NSObject

@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSURL *assetPath;
@property (retain, nonatomic) APOdmlXpcLifecycleHandler *task;
@property (retain, nonatomic) NSDate *creationTime;
@property (retain, nonatomic) APOdmlAssetManager *assetManager;
@property (readonly, nonatomic) unsigned long long assetManagerType;
@property (readonly, nonatomic) unsigned long long placementType;

- (id)initWithPlacementType:(unsigned long long)a0 assetManagerType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithActivity:(id)a0 placementType:(unsigned long long)a1 assetManagerType:(unsigned long long)a2;
- (id)createAppUsageVectors;

@end
