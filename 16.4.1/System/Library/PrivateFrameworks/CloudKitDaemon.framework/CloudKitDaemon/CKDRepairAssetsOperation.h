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

- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)nameForState:(unsigned long long)a0;
- (void)main;
- (id)repairContainer;
- (void).cxx_destruct;
- (void)_updateMissingAssetServerStatus;
- (void)_fetchAssetMetadata;
- (void)_uploadAssetsModify;
- (id)assetOrPackageForMetadata:(id)a0 inRecord:(id)a1;

@end
