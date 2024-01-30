@class NSMutableDictionary, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface FPProgressManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_downloadProgressPerItemIDs;
    NSMapTable *_uploadProgressPerItemIDs;
    NSMapTable *_copyProgressPerItemIDs;
    NSMutableDictionary *_downloadProgressPerProviderDomainID;
    NSMutableDictionary *_publishingHandlersPerProviderDomainID;
    NSMutableDictionary *_unpublishingHandlersPerProviderDomainID;
}

+ (id)defaultManager;

- (id)init;
- (void).cxx_destruct;
- (id)downloadProgressForItem:(id)a0;
- (id)uploadProgressForItem:(id)a0;
- (id)copyProgressForItem:(id)a0;
- (id)downloadProgressForProviderDomainID:(id)a0;
- (void)_resetDownloadProgressWithProviderDomainID:(id)a0;
- (id)_progressForItem:(id)a0 usingProgressMap:(id)a1;
- (void)attachProgressToItemsIfNeeded:(id)a0;
- (void)registerCopyProgress:(id)a0 forItemID:(id)a1;
- (void)removeCopyProgressForItemID:(id)a0;
- (void)removeDownloadProgressForItemID:(id)a0;
- (void)removeCopyProgress:(id)a0;
- (void)setPublishingHandler:(id /* block */)a0 forProviderDomainID:(id)a1;
- (void)childProgressDidComplete:(id)a0 providerDomainID:(id)a1;
- (void)addChild:(id)a0 toGlobalProgressWithProviderDomainID:(id)a1;

@end
