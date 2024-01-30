@class APOdmlFeatureStorage, NSString, NSOperationQueue, TRIClient, NSObject;

@interface ADOdmlAssetManager : NSObject

@property (readonly, nonatomic) TRIClient *trialClient;
@property (retain, nonatomic) APOdmlFeatureStorage *featureStorage;
@property (retain, nonatomic) NSObject *featureStorageNotificationObserver;
@property (retain, nonatomic) NSOperationQueue *featureStorageRefreshQueue;
@property (readonly, nonatomic) int deploymentID;
@property (readonly, nonatomic) NSString *experimentID;
@property (readonly, nonatomic) NSString *treatmentID;
@property (readonly, nonatomic) NSString *odmlNamespace;
@property (readonly, nonatomic) int odmlVersion;

+ (id)sharedAssetManager;

- (id)init;
- (id)getDoubleValueForFactor:(id)a0;
- (void).cxx_destruct;
- (id)getBooleanValueForFactor:(id)a0;
- (id)getLongValueForFactor:(id)a0;
- (id)getStringValueForFactor:(id)a0;
- (void)refreshTrialClient;
- (id)getPathForFactor:(id)a0 isDirectory:(BOOL)a1;
- (void)saveFeatureFromObject:(id)a0 withName:(id)a1;
- (id)getFeatureVectorForName:(id)a0;
- (id)currentMLModel;
- (void)refreshFeatureStorage;

@end
