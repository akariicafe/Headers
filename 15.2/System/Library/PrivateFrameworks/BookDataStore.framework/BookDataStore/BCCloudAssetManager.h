@class BCCloudDataSource, BCCloudAssetAnnotationManager, NSManagedObjectModel, BDSSaltVersionIdentifierManager, BDSServiceProxy, BCCloudChangeTokenController, NSObject;
@protocol BCCloudStoreAssetManager, BCCloudAssetReviewManager, BCCloudAssetDetailManager, BCCloudReadingNowDetailManager;

@interface BCCloudAssetManager : NSObject <BDSCloudKitSupportSignOut>

@property (retain, nonatomic) BCCloudAssetAnnotationManager *assetAnnotationManager;
@property (retain, nonatomic) NSObject<BCCloudAssetDetailManager> *assetDetailManager;
@property (retain, nonatomic) NSObject<BCCloudReadingNowDetailManager> *readingNowDetailManager;
@property (retain, nonatomic) NSObject<BCCloudAssetReviewManager> *assetReviewManager;
@property (retain, nonatomic) NSObject<BCCloudStoreAssetManager> *storeAssetManager;
@property (retain, nonatomic) BCCloudChangeTokenController *changeTokenController;
@property (retain, nonatomic) BDSSaltVersionIdentifierManager *saltVersionIdentifierManager;
@property (retain, nonatomic) NSManagedObjectModel *objectModel;
@property (retain, nonatomic) BDSServiceProxy *serviceProxy;
@property (nonatomic) BOOL proxyMode;
@property (retain, nonatomic) BCCloudDataSource *assetDataSource;

+ (id)sharedManager;
+ (id)sharedClientXPCProxy;

- (void).cxx_destruct;
- (void)dealloc;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)a0;
- (void)setEnableCloudSync:(BOOL)a0 enableReadingNowSync:(BOOL)a1;
- (void)deleteCloudDataWithCompletion:(id /* block */)a0;
- (id)initClientXPCProxy;

@end
