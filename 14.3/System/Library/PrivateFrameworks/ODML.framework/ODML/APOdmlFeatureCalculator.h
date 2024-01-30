@class NSString, APOdmlXpcLifecycleHandler, NSURL, NSDate, NSObject, ADOdmlAssetManager;
@protocol OS_dispatch_queue_global;

@interface APOdmlFeatureCalculator : NSObject

@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSURL *assetPath;
@property (retain, nonatomic) APOdmlXpcLifecycleHandler *task;
@property (retain, nonatomic) NSDate *creationTime;
@property BOOL operationInProgress;
@property (retain, nonatomic) NSObject<OS_dispatch_queue_global> *assetQueue;
@property (retain, nonatomic) ADOdmlAssetManager *assetManager;

- (void).cxx_destruct;
- (id)initWithActivity:(id)a0;
- (void)createAppUsageVectors:(id /* block */)a0;

@end
