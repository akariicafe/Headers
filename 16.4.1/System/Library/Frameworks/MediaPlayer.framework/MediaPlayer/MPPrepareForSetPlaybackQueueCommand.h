@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPPrepareForSetPlaybackQueueCommand : MPRemoteCommand {
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (copy, nonatomic) NSDictionary *proactiveCommandOptions;

- (id)_mediaRemoteCommandInfoOptions;
- (id)initWithMediaRemoteCommandType:(unsigned int)a0;
- (void).cxx_destruct;

@end
