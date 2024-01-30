@class NSUUID, NSString, NSExtension, NSObject;
@protocol OS_dispatch_queue;

@interface FPDExtension : FPDProvider <FPDPushMessageDelegate>

@property (retain, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *presentersQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedSessionQueue;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithExtension:(id)a0 queue:(id)a1 server:(id)a2;

- (void).cxx_destruct;
- (void)_test_callFileProviderManagerAPIs:(id /* block */)a0;
- (void)currentMaterializedSetSyncAnchorForDomain:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isAppExtensionReachable;
- (id)asAppExtensionBackedProvider;
- (BOOL)isEqual:(id)a0;
- (id)initWithExtension:(id)a0 queue:(id)a1 server:(id)a2;
- (void)enumerateMaterializedSetForDomain:(id)a0 syncAnchor:(id)a1 completionHandler:(id /* block */)a2;
- (id)customPushTopics;
- (void)removeTrashedItemsOlderThanDate:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)didReceiveMessage:(id)a0;
- (void)reindexAllSearchableItemsForRequest:(id)a0 acknowledgementHandler:(id /* block */)a1;

@end
