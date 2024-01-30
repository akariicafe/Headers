@class NSArray, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface MPInsertIntoPlaybackQueueCommand : MPRemoteCommand {
    NSMutableSet *_registeredQueueTypes;
    NSMutableSet *_registeredCustomQueueIdentifiers;
    BOOL _supportsSharedQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (copy, nonatomic) NSArray *supportedInsertionPositions;

- (void)registerSupportedQueueType:(long long)a0;
- (void).cxx_destruct;
- (void)unregisterSupportedQueueType:(long long)a0;
- (void)setSupportedSharedQueue:(BOOL)a0;
- (id)initWithMediaRemoteCommandType:(unsigned int)a0;
- (void)unregisterSupportedCustomQueueIdentifier:(id)a0;
- (void)registerSupportedCustomQueueIdentifier:(id)a0;
- (id)_mediaRemoteCommandInfoOptions;

@end
