@class ICDelegationServiceSecuritySettings, NSString, NSDictionary, NSNetService, NSObject;
@protocol ICDelegationConsumerNetServiceDelegate, OS_dispatch_queue;

@interface ICDelegationConsumerNetService : NSObject <NSNetServiceDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _didPublish;
    BOOL _isPublished;
    NSNetService *_netService;
    NSObject<OS_dispatch_queue> *_netServiceQueue;
    ICDelegationServiceSecuritySettings *_securitySettings;
}

@property (weak, nonatomic) id<ICDelegationConsumerNetServiceDelegate> delegate;
@property (readonly, copy, nonatomic) NSDictionary *userIdentityDelegationAccountUUIDs;
@property (readonly, nonatomic) ICDelegationServiceSecuritySettings *securitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)publish;
- (void)netService:(id)a0 didAcceptConnectionWithInputStream:(id)a1 outputStream:(id)a2;
- (void).cxx_destruct;
- (void)netService:(id)a0 didNotPublish:(id)a1;
- (void)netServiceDidPublish:(id)a0;
- (void)dealloc;
- (void)stop;
- (void)_updateNetServiceStatus;
- (id)initWithUserIdentityDelegationAccountUUIDs:(id)a0;

@end
