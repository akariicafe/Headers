@protocol NRBloomFilterInfoService;

@interface NRURLResolutionManager : NSObject

@property (readonly, nonatomic) id<NRBloomFilterInfoService> bloomFilterInfoService;
@property (readonly, nonatomic) BOOL userHasBundleSubscription;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (id)createResolutionOperationForNewsURL:(id)a0;
- (id)createResolutionOperationForWebURL:(id)a0;

@end
