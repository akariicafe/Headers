@class NSArray, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface MPInsertIntoPlaybackQueueCommand : MPRemoteCommand {
    NSMutableSet *_registeredQueueTypes;
    NSMutableSet *_registeredCustomQueueIdentifiers;
    BOOL _supportsSharedQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (copy, nonatomic) NSArray *supportedInsertionPositions;

- (void)unregisterSupportedCustomQueueIdentifier:(id)a0;
- (void)registerSupportedQueueType:(long long)a0;
- (id)_mediaRemoteCommandInfoOptions;
- (void)unregisterSupportedQueueType:(long long)a0;
- (id)initWithMediaRemoteCommandType:(unsigned int)a0;
- (void).cxx_destruct;
- (void)setSupportedSharedQueue:(BOOL)a0;
- (void)registerSupportedCustomQueueIdentifier:(id)a0;

@end
