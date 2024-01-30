@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PHAssetCreationRequestPlaceholderSupportNotificationManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_assetAvailabilityHandlers;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)assetAvailableNotification:(id)a0;
- (void)callCompletionHandlerForAssetUUID:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)registerAssetAvailabilityHandler:(id /* block */)a0 forAssetUUID:(id)a1;
- (void)unregisterAssetAvailabilityHandlerForAssetUUID:(id)a0;
- (void)_onQueueSync:(id /* block */)a0;

@end
