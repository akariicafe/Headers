@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TPSCloudController : NSObject {
    BOOL _registered;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_displayedContentIDs;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)registerForNotifications:(id)a0;
- (void)dealloc;
- (void)checkForUpdates;
- (void)updateKVStoreItems:(id)a0;
- (BOOL)isHintDisplayedForContentID:(id)a0;
- (void)hintDisplayedForContentID:(id)a0;
- (id)_listDisplayContentIDs;
- (void)_clearDisplayedContentIDs;

@end
