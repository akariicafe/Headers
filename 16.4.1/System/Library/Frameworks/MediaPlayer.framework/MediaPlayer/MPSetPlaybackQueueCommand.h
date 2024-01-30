@class NSObject, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface MPSetPlaybackQueueCommand : MPRemoteCommand {
    NSMutableDictionary *_registeredSpecializedQueues;
    NSMutableSet *_registeredQueueTypes;
    NSMutableSet *_registeredCustomQueueIdentifiers;
    BOOL _supportsSharedQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (nonatomic) long long upNextItemCount;

- (void)unregisterSupportedCustomQueueIdentifier:(id)a0;
- (void)registerSupportedQueueType:(long long)a0;
- (id)_mediaRemoteCommandInfoOptions;
- (void)registerSpecializedQueueIdentifier:(id)a0 localizedName:(id)a1 queueType:(long long)a2 queueParameters:(id)a3;
- (void)unregisterSpecializedQueueIdentifier:(id)a0;
- (void)unregisterSupportedQueueType:(long long)a0;
- (id)initWithMediaRemoteCommandType:(unsigned int)a0;
- (void).cxx_destruct;
- (void)setSupportedSharedQueue:(BOOL)a0;
- (void)registerSupportedCustomQueueIdentifier:(id)a0;

@end
