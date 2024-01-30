@class NSString, IDSService, NSObject;
@protocol OS_dispatch_queue;

@interface CMSM_IDSClient : NSObject <IDSServiceDelegate> {
    IDSService *pIdsService;
    NSObject<OS_dispatch_queue> *idsDispatchQueue;
    NSString *_lastSentRemotePlayingInfoQueryGUID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
