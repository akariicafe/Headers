@class NSString, NSMutableDictionary, NSObject, IDSAccount;
@protocol OS_dispatch_queue;

@interface BCSIdentityService : NSObject <BCSIdentityServiceProtocol> {
    IDSAccount *_businessChatAccount;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (retain, nonatomic) NSMutableDictionary *idStatusCompletionBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)loginID;
- (void).cxx_destruct;
- (void)idStatusUpdatedForDestinations:(id)a0 service:(id)a1;
- (void)refreshIDStatusForBizID:(id)a0 completion:(id /* block */)a1;
- (id)businessChatAccount;
- (void)addIDSIDQueryControllerDelegate;
- (void)handleIDStatusCompletionBlocksForBizID:(id)a0 idStatus:(long long)a1;
- (void)warmBusinessChatAccountCache;

@end
