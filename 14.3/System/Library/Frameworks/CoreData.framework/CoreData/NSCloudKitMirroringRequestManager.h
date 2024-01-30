@class NSCloudKitMirroringDelegateResetRequest, NSCloudKitMirroringExportRequest, NSCloudKitMirroringImportRequest, NSCloudKitMirroringDelegateSerializationRequest, NSCloudKitMirroringExportProgressRequest, NSCloudKitMirroringInitializeSchemaRequest, NSCloudKitMirroringFetchRecordsRequest, NSCloudKitMirroringResetZoneRequest, NSCloudKitMirroringRequest, NSCloudKitMirroringDelegateSetupRequest, NSCloudKitMirroringResetMetadataRequest;

@interface NSCloudKitMirroringRequestManager : NSObject

@property (readonly, nonatomic) NSCloudKitMirroringImportRequest *pendingImportRequest;
@property (readonly, nonatomic) NSCloudKitMirroringExportRequest *pendingExportRequest;
@property (readonly, nonatomic) NSCloudKitMirroringDelegateSetupRequest *pendingSetupRequest;
@property (readonly, nonatomic) NSCloudKitMirroringDelegateResetRequest *pendingDelegateResetRequest;
@property (readonly, nonatomic) NSCloudKitMirroringResetZoneRequest *pendingResetRequest;
@property (readonly, nonatomic) NSCloudKitMirroringFetchRecordsRequest *pendingFetchRecordsRequest;
@property (readonly, nonatomic) NSCloudKitMirroringResetMetadataRequest *pendingResetMetadataRequest;
@property (readonly, nonatomic) NSCloudKitMirroringRequest *activeRequest;
@property (readonly, nonatomic) NSCloudKitMirroringDelegateSerializationRequest *pendingSerializationRequest;
@property (readonly, nonatomic) NSCloudKitMirroringInitializeSchemaRequest *pendingInitializeSchemaRequest;
@property (readonly, nonatomic) NSCloudKitMirroringExportProgressRequest *pendingExportProgressRequest;

- (void)dealloc;
- (void)requestFinished:(id)a0;
- (id)dequeueNextRequest;
- (id)dequeueAllPendingRequests;
- (BOOL)enqueueRequest:(id)a0 error:(id *)a1;

@end
