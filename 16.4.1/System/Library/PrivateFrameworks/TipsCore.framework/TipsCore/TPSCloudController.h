@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TPSCloudController : NSObject {
    BOOL _registered;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_displayedContentIDs;
}

+ (id)sharedInstance;

- (id)_listDisplayContentIDs;
- (void)_clearDisplayedContentIDs;
- (void)hintDisplayedForContentID:(id)a0;
- (void)checkForUpdates;
- (void)updateKVStoreItems:(id)a0;
- (void)dealloc;
- (BOOL)isHintDisplayedForContentID:(id)a0;
- (void)registerForNotifications:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
