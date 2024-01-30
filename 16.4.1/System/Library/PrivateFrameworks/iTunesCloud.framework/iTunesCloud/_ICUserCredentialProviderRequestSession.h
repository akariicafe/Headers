@class NSArray, ICUserIdentityProperties, NSMapTable, NSMutableDictionary, ICUserIdentityStore, NSMutableArray;

@interface _ICUserCredentialProviderRequestSession : NSObject

@property (copy, nonatomic) ICUserIdentityProperties *activeICloudAccountProperties;
@property (readonly, copy, nonatomic) NSArray *credentialRequests;
@property (retain, nonatomic) NSMapTable *delegationCredentialRequestToSpecificUserIdentity;
@property (retain, nonatomic) NSMapTable *delegationCredentialRequestToIdentityProperties;
@property (retain, nonatomic) NSMutableDictionary *delegationUserIdentityToUUIDs;
@property (readonly, nonatomic) ICUserIdentityStore *identityStore;
@property (readonly, nonatomic) long long maximumQualityOfService;
@property (retain, nonatomic) NSMutableArray *pendingPropertyLoadCredentialRequests;
@property (retain, nonatomic) NSMutableArray *pendingResponseCredentialRequests;
@property (readonly, nonatomic) BOOL hasPendingResponses;
@property (readonly, copy, nonatomic) id /* block */ responseHandler;

- (id)initWithCredentialRequests:(id)a0 responseHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
