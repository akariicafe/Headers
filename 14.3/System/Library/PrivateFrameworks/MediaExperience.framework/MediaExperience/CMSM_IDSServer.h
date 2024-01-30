@class NSString, IDSService, NSObject;
@protocol OS_dispatch_queue;

@interface CMSM_IDSServer : NSObject <IDSServiceDelegate> {
    IDSService *pIdsService;
    NSObject<OS_dispatch_queue> *idsDispatchQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)init;

@end
