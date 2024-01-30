@class NSArray, NSDictionary, CKUploadRequestConfiguration, NSMutableDictionary, NSSet, CKDOperation;
@protocol CKRepairAssetsOperationCallbacks;

@interface CKDRepairAssetsOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (retain, nonatomic) NSDictionary *UUIDToAssetOrPackage;
@property (retain, nonatomic) NSDictionary *assetOrPackageUUIDToMetadata;
@property (retain, nonatomic) NSArray *unavailableAssetsAndPackages;
@property (retain, nonatomic) CKDOperation *fetchOperation;
@property (retain, nonatomic) CKDOperation *uploadOperation;
@property (retain, nonatomic) CKDOperation *updateOperation;
@property (retain, nonatomic) NSMutableDictionary *assetOrPackageUUIDToOriginalRecord;
@property (retain, nonatomic) NSDictionary *assetOrPackageUUIDToUploadError;
@property (retain, nonatomic) NSSet *uploadedAssetOrPackageUUIDs;
@property (retain, nonatomic) id<CKRepairAssetsOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ assetOrPackageRepairedBlock;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void).cxx_destruct;
- (id)nameForState:(unsigned long long)a0;
- (BOOL)makeStateTransition;
- (void)main;
- (id)repairContext;
- (void)_fetchAssetMetadata;
- (void)_uploadAssetsModify;
- (void)_updateMissingAssetServerStatus;
- (id)assetOrPackageForMetadata:(id)a0 inRecord:(id)a1;

@end
