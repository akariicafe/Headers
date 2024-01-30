@class MCDeviceUploadSubmitDeviceRequestPayload, NSString, NSXPCConnection, MCDeviceUploadOrganization, MCDeviceUploadCredentials;

@interface MCTeslaServicer : NSObject

@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSString *nonce;
@property (retain, nonatomic) MCDeviceUploadCredentials *userCredentials;
@property (retain, nonatomic) MCDeviceUploadOrganization *organization;
@property (retain, nonatomic) MCDeviceUploadSubmitDeviceRequestPayload *deviceUploadRequest;

- (id)init;
- (void)provisionallyEnrollWithNonce:(id)a0 completionBlock:(id /* block */)a1;
- (void)fetchConfigurationWithCompletionBlock:(id /* block */)a0;
- (id)_connectionError;
- (void)retrieveDeviceUploadOrganizationsWithCredentials:(id)a0 completionBlock:(id /* block */)a1;
- (void)fetchConfigurationWithoutValidationWithCompletionBlock:(id /* block */)a0;
- (void)_completeServiceWithSuccess:(BOOL)a0 response:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)_callServiceByType:(long long)a0 onProxy:(id)a1 completionBlock:(id /* block */)a2;
- (void)_retrieveProxyObjectAndRunServiceType:(long long)a0 completionBlock:(id /* block */)a1;
- (void)dealloc;
- (void)retrieveDeviceUploadSoldToIdsForOrganization:(id)a0 credentials:(id)a1 completionBlock:(id /* block */)a2;
- (void)submitDeviceUploadRequest:(id)a0 credentials:(id)a1 completionBlock:(id /* block */)a2;
- (void)unenrollWithCompletionBlock:(id /* block */)a0;
- (void)retrieveDeviceUploadRequestTypesWithCredentials:(id)a0 completionBlock:(id /* block */)a1;

@end
